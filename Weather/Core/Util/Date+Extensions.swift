//
//  Date+Extensions.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Foundation
import Shared

extension Kotlinx_datetimeInstant {
    public var asSwiftDate: Date {
        let unixTimestamp = Double(epochSeconds) + Double(nanosecondsOfSecond) / 1_000_000_000

        return Date(timeIntervalSince1970: unixTimestamp)
    }
    
}

extension Date {
    public var relativeWeekday: String {
        let calendar = Calendar.current

        // Get the number of days between the date and today
        let today = calendar.startOfDay(for: Date())
        let inputDate = calendar.startOfDay(for: self)

        guard let difference = calendar.dateComponents([.day], from: today, to: inputDate).day else {
            // Fallback to standard weekday format if calculation fails
            return formatted(.dateTime.weekday(.wide))
        }

        return switch difference {
        case 0:
            "Today"
        case 1:
            "Tomorrow"
        case 2...5:
            // Return full weekday name for days 2-5 from now
            formatted(.dateTime.weekday(.wide))
        default:
            // For dates beyond 5 days or in the past, return the standard weekday format
            formatted(.dateTime.weekday(.wide))
        }
    }
}
