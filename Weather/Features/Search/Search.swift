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
    @Dependency(\.geocodingClient) var geocodingClient

    @ObservableState
    struct State: Equatable {
        var searchQuery = ""
        var results = [GeocodingResult]()
        var selectedResult: GeocodingResult?
        @Presents public var days: Days.State?
    }

    enum Action {
        case searchQueryChanged(String)
        case searchQueryChangeDebounced
        case days(PresentationAction<Days.Action>)
        case searchResponse(Result<[GeocodingResult], Never>)
        case selectResult(GeocodingResult)
        case doneTapped
    }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .days:
                return .none
            case let .searchQueryChanged(query):
                guard !query.isEmpty else {
                    state.results = []
                    return .none
                }
                state.searchQuery = query

                return .none

            case .searchQueryChangeDebounced:
                guard !state.searchQuery.isEmpty else {
                    return .none
                }

                return .run { [query = state.searchQuery] send in
                    let result = try? await geocodingClient.geocode(address: query)
                    guard let result else { return }
                    await send(.searchResponse(.success(result)))
                }
            case let .searchResponse(.success(response)):
                state.results = response
                return .none
            case .doneTapped:
                if let result = state.selectedResult {
                    state.days = Days.State(result: result)
                }
                
                return .none
            case let .selectResult(result):
                state.selectedResult = result
                return .none
            }
        }
        .ifLet(\.$days, action: \.days) {
            Days()
        }
    }
}

