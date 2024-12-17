//
//  DataValuesDaily+WindDirection.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Shared

extension DataValuesDaily {
    var windDirection: String {
        let normalizedDegrees = (windDirectionAvg.truncatingRemainder(dividingBy: 360) + 360)
            .truncatingRemainder(dividingBy: 360)

        let directions: [(range: Range<Double>, symbol: String)] = [
            (337.5..<360.1, "N"),
            (0..<22.5, "N"),
            (22.5..<67.5, "NE"),
            (67.5..<112.5, "E"),
            (112.5..<157.5, "SE"),
            (157.5..<202.5, "S"),
            (202.5..<247.5, "SW"),
            (247.5..<292.5, "W"),
            (292.5..<337.5, "NW")
        ]

        for (range, symbol) in directions {
            if range.contains(normalizedDegrees) {
                return symbol
            }
        }

        return "N"
    }
}
