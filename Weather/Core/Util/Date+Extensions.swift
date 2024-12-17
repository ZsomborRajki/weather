//
//  Date+Extensions.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Foundation
import Shared

extension Kotlinx_datetimeInstant {
    var asSwiftDate: Date {
        let unixTimestamp = Double(epochSeconds) + Double(nanosecondsOfSecond) / 1_000_000_000

        return Date(timeIntervalSince1970: unixTimestamp)
    }
}
