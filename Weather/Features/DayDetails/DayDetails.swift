//
//  DayDetails.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Shared

@Reducer
struct DayDetails {
    @ObservableState
    struct State: Equatable {
        let item: TimelineItem<DataValuesDaily>
    }
}
