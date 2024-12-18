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
        var place: GeocodingPlace
        var isLoading = false
        var forecast: WeatherForecast?
        var errorText = ""
        @Presents public var dayDetails: DayDetails.State?
        @Presents public var location: LocationFeature.State?
    }

    enum Action {
        case forecastResponse(Result<WeatherForecast, Swift.Error>)
        case fetchForecast
        case selectDayItem(TimelineItem<DataValuesDaily>)
        case dayDetails(PresentationAction<DayDetails.Action>)
        case location(PresentationAction<LocationFeature.Action>)
        case openLocation
        case dismissLocation
        case selectPlace(GeocodingPlace)
    }

    @Dependency(\.weatherClient) var weatherClient
    private enum CancelID { case forcast }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .fetchForecast:
                if state.forecast == nil {
                    state.isLoading = true
                }
                return .run { [place = state.place] send in
                    await send(.forecastResponse(Result {
                        try await weatherClient.forecast(place: place)
                    }))
                }
                .cancellable(id: CancelID.forcast)
            case let .forecastResponse(.success(response)):
                state.isLoading = false
                state.forecast = response

                return .none
            case let .forecastResponse(.failure(error)):
                state.isLoading = false
                state.errorText = error.localizedDescription

                return .none
            case let .selectDayItem(item):
                state.dayDetails = DayDetails.State(item: item)

                return .none
            case .openLocation:
                state.location = LocationFeature.State(selectedPlace: state.place)

                return .none
            case .dismissLocation:
                state.location = nil

                return .none
            case .selectPlace(let place):
                state.place = place
                state.forecast = nil
                state.location = nil

                return .send(.fetchForecast)
            case let .location(.presented(.selectPlace(place))):
                return .send(.selectPlace(place))
            case .dayDetails, .location:
                return .none
            }
        }
        .ifLet(\.$dayDetails, action: \.dayDetails) {
            DayDetails()
        }
        .ifLet(\.$location, action: \.location) {
            LocationFeature()
        }
    }
}
