//
//  Days.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture

@Reducer
struct Days {
    @ObservableState
    struct State: Equatable {
        let result: GeocodingResult
        var isLoading = false
    }

    enum Action {
    }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
                .none
        }
    }
}
