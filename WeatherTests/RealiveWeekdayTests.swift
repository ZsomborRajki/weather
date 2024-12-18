//
//  RealiveWeekdayTests.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 18..
//


import Testing
import Foundation
@testable import Weather

extension Date {
    fileprivate static func createDate(daysFromToday days: Int) -> Date {
        Calendar.current.date(byAdding: .day, value: days, to: Date()) ?? Date()
    }
}

@Suite("RelativeWeekday Tests")
final class RelativeWeekdayTests {

    @Test("Returns 'Today' for current date")
    func testToday() {
        let today = Date()
        #expect(today.relativeWeekday == "Today")
    }

    @Test("Returns 'Tomorrow' for tomorrow's date")
    func testTomorrow() {
        let tomorrow = Date.createDate(daysFromToday: 1)
        #expect(tomorrow.relativeWeekday == "Tomorrow")
    }

    @Test("Returns weekday name for dates 2-5 days ahead", arguments: [2, 3, 4, 5])
    func testNearFutureDays(daysAhead: Int) {
        let futureDate = Date.createDate(daysFromToday: daysAhead)
        let expectedWeekday = futureDate.formatted(.dateTime.weekday(.wide))
        #expect(futureDate.relativeWeekday == expectedWeekday)
    }

    @Test("Returns weekday name for dates more than 5 days ahead", arguments: [6, 7, 14])
    func testFarFutureDays(daysAhead: Int) {
        let futureDate = Date.createDate(daysFromToday: daysAhead)
        let expectedWeekday = futureDate.formatted(.dateTime.weekday(.wide))
        #expect(futureDate.relativeWeekday == expectedWeekday)
    }

    @Test("Returns weekday name for past dates", arguments: [-1, -2, -7])
    func testPastDays(daysAgo: Int) {
        let pastDate = Date.createDate(daysFromToday: daysAgo)
        let expectedWeekday = pastDate.formatted(.dateTime.weekday(.wide))
        #expect(pastDate.relativeWeekday == expectedWeekday)
    }
}
