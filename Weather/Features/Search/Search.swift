//
//  Search.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Shared

@Reducer
struct Search {
    @ObservableState
    struct State: Equatable {
        var searchQuery = ""
        var places = [GeocodingPlace]()
        var selectedPlace: GeocodingPlace?
        @Presents public var days: Days.State?
    }

    enum Action {
        case searchQueryChanged(String)
        case days(PresentationAction<Days.Action>)
        case searchResponse(Result<[GeocodingPlace], Never>)
        case selectPlace(GeocodingPlace)
        case doneTapped
    }

    @Dependency(\.geocodingClient) var geocodingClient
    @Dependency(\.storageClient) var storageClient

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .days:
                return .none
            case let .searchQueryChanged(query):
                guard !query.isEmpty else {
                    state.places = []
                    return .none
                }
                state.searchQuery = query

                return .run { [query = state.searchQuery] send in
                    guard let result = try? await geocodingClient.geocode(address: query) else {
                        return
                    }

                    await send(.searchResponse(.success(result)))
                }
            case let .searchResponse(.success(response)):
                state.places = response

                return .none
            case .doneTapped:
                if let place = state.selectedPlace {
                    state.days = Days.State(place: place)
                }
                
                return .none
            case let .selectPlace(place):
                state.selectedPlace = place

                return .run { send in
                    print("saving: \(place)")
                    try storageClient.saveplace(place)
                }
            }
        }
        .ifLet(\.$days, action: \.days) {
            Days()
        }
    }
}

