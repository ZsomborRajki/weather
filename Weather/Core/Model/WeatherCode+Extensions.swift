//
//  WeatherCode+Extensions.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Shared

extension WeatherCode? {
    func toString() -> String {
        guard let self = self else { return "" }
        let rawString = String(describing: self)
        return rawString
            .split(separator: "_")
            .map { $0.capitalized }
            .joined(separator: " ")
    }
}
