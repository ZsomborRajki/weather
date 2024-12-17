//
//  Days.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Shared

@Reducer
struct Days {
    @ObservableState
    struct State: Equatable {
        let place: GeocodingPlace
        var isLoading = false
        var forecast: WeatherForecast?
        var errorText = ""
        @Presents public var dayDetails: DayDetails.State?
    }

    enum Action {
        case forecastResponse(Result<WeatherForecast, Swift.Error>)
        case fetchForecast
        case selectDayItem(TimelineItem<DataValuesDaily>)
        case dayDetails(PresentationAction<DayDetails.Action>)
    }

    @Dependency(\.weatherClient) var weatherClient
    private enum CancelID { case forcast }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .fetchForecast:
                guard !state.isLoading else { return .none }
                state.isLoading = true

                return .run { [place = state.place] send in
                    await send(.forecastResponse(Result {
                        try await weatherClient.forecast(place: place)
                    }))
                }
                .cancellable(id: CancelID.forcast)
            case let .forecastResponse(.success(response)):
                state.forecast = response
                state.isLoading = false

                return .none
            case let .forecastResponse(.failure(error)):
                state.isLoading = false
                state.errorText = error.localizedDescription

                return .none
            case let .selectDayItem(item):
                state.dayDetails = DayDetails.State(item: item)

                return .none
            case .dayDetails:
                return .none
            }
        }
        .ifLet(\.$dayDetails, action: \.dayDetails) {
            DayDetails()
        }
    }
}
