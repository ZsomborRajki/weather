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
        @Presents public var myLocation: UseMyLocation.State?
    }

    enum Action {
        case search(PresentationAction<Search.Action>)
        case myLocation(PresentationAction<UseMyLocation.Action>)
        case enterLocationTapped
        case useMyLocationTapped
    }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .enterLocationTapped:
                state.search = Search.State()

                return .none

            case .useMyLocationTapped:
                state.myLocation = UseMyLocation.State()

                return .none

            case .search, .myLocation:
                return .none
            }
        }
        .ifLet(\.$search, action: \.search) {
            Search()
        }
        .ifLet(\.$myLocation, action: \.myLocation) {
            UseMyLocation()
        }
    }
}
