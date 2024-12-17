//
//  Search.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture

@Reducer
struct Search {
    @ObservableState
    struct State: Equatable {
        var searchQuery = ""
    }

    enum Action {
        case searchQueryChanged(String)
        case searchQueryChangeDebounced
    }

    var body: some Reducer<State, Action> {
        Reduce { state, action in
                .none
        }
    }
}

