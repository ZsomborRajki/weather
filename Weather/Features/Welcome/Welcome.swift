//
//  WelcomeFeature.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture

@Reducer
struct Welcome {
    @ObservableState
    struct State: Equatable {
        @Presents public var search: Search.State?
    }

    enum Action {
        case search(PresentationAction<Search.Action>)
        case useMyLocationTapped
    }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .search:
                state.search = Search.State()
                   return .none
            case .useMyLocationTapped:
                return .none
            }
        }
        .ifLet(\.$search, action: \.search) {
            Search()
        }
    }
}