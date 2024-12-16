//
//  DataValuesMinutely.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 16..
//

import Foundation
import SwiftData

@Model
final class DataValuesMinutely: Codable {
    var cloudBase: Double?
    var cloudCeiling: Double?
    var cloudCover: Double
    var dewPoint: Double
    var freezingRainIntensity: Double
    var humidity: Double
    var precipitationProbability: Double
    var pressureSurfaceLevel: Double
    var rainIntensity: Double
    var sleetIntensity: Double
    var snowIntensity: Double
    var temperature: Double
    var temperatureApparent: Double
    var uvHealthConcern: Int
    var uvIndex: Int
    var visibility: Double
    var weatherCodeValue: Int
    var windDirection: Double
    var windGust: Double
    var windSpeed: Double

    init(
        cloudBase: Double? = nil,
        cloudCeiling: Double? = nil,
        cloudCover: Double,
        dewPoint: Double,
        freezingRainIntensity: Double,
        humidity: Double,
        precipitationProbability: Double,
        pressureSurfaceLevel: Double,
        rainIntensity: Double,
        sleetIntensity: Double,
        snowIntensity: Double,
        temperature: Double,
        temperatureApparent: Double,
        uvHealthConcern: Int,
        uvIndex: Int,
        visibility: Double,
        weatherCodeValue: Int,
        windDirection: Double,
        windGust: Double,
        windSpeed: Double
    ) {
        self.cloudBase = cloudBase
        self.cloudCeiling = cloudCeiling
        self.cloudCover = cloudCover
        self.dewPoint = dewPoint
        self.freezingRainIntensity = freezingRainIntensity
        self.humidity = humidity
        self.precipitationProbability = precipitationProbability
        self.pressureSurfaceLevel = pressureSurfaceLevel
        self.rainIntensity = rainIntensity
        self.sleetIntensity = sleetIntensity
        self.snowIntensity = snowIntensity
        self.temperature = temperature
        self.temperatureApparent = temperatureApparent
        self.uvHealthConcern = uvHealthConcern
        self.uvIndex = uvIndex
        self.visibility = visibility
        self.weatherCodeValue = weatherCodeValue
        self.windDirection = windDirection
        self.windGust = windGust
        self.windSpeed = windSpeed
    }

    enum CodingKeys: CodingKey {
        case cloudBase, cloudCeiling, cloudCover, dewPoint, freezingRainIntensity, humidity,
             precipitationProbability, pressureSurfaceLevel, rainIntensity, sleetIntensity,
             snowIntensity, temperature, temperatureApparent, uvHealthConcern,
             uvIndex, visibility, weatherCodeValue, windDirection, windGust, windSpeed
    }

    required init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)
        self.cloudBase = try container.decodeIfPresent(Double.self, forKey: .cloudBase)
        self.cloudCeiling = try container.decodeIfPresent(Double.self, forKey: .cloudCeiling)
        self.cloudCover = try container.decode(Double.self, forKey: .cloudCover)
        self.dewPoint = try container.decode(Double.self, forKey: .dewPoint)
        self.freezingRainIntensity = try container.decode(Double.self, forKey: .freezingRainIntensity)
        self.humidity = try container.decode(Double.self, forKey: .humidity)
        self.precipitationProbability = try container.decode(Double.self, forKey: .precipitationProbability)
        self.pressureSurfaceLevel = try container.decode(Double.self, forKey: .pressureSurfaceLevel)
        self.rainIntensity = try container.decode(Double.self, forKey: .rainIntensity)
        self.sleetIntensity = try container.decode(Double.self, forKey: .sleetIntensity)
        self.snowIntensity = try container.decode(Double.self, forKey: .snowIntensity)
        self.temperature = try container.decode(Double.self, forKey: .temperature)
        self.temperatureApparent = try container.decode(Double.self, forKey: .temperatureApparent)
        self.uvHealthConcern = try container.decode(Int.self, forKey: .uvHealthConcern)
        self.uvIndex = try container.decode(Int.self, forKey: .uvIndex)
        self.visibility = try container.decode(Double.self, forKey: .visibility)
        self.weatherCodeValue = try container.decode(Int.self, forKey: .weatherCodeValue)
        self.windDirection = try container.decode(Double.self, forKey: .windDirection)
        self.windGust = try container.decode(Double.self, forKey: .windGust)
        self.windSpeed = try container.decode(Double.self, forKey: .windSpeed)
    }

    func encode(to encoder: any Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(self.cloudBase, forKey: .cloudBase)
        try container.encodeIfPresent(self.cloudCeiling, forKey: .cloudCeiling)
        try container.encode(self.cloudCover, forKey: .cloudCover)
        try container.encode(self.dewPoint, forKey: .dewPoint)
        try container.encode(self.freezingRainIntensity, forKey: .freezingRainIntensity)
        try container.encode(self.humidity, forKey: .humidity)
        try container.encode(self.precipitationProbability, forKey: .precipitationProbability)
        try container.encode(self.pressureSurfaceLevel, forKey: .pressureSurfaceLevel)
        try container.encode(self.rainIntensity, forKey: .rainIntensity)
        try container.encode(self.sleetIntensity, forKey: .sleetIntensity)
        try container.encode(self.snowIntensity, forKey: .snowIntensity)
        try container.encode(self.temperature, forKey: .temperature)
        try container.encode(self.temperatureApparent, forKey: .temperatureApparent)
        try container.encode(self.uvHealthConcern, forKey: .uvHealthConcern)
        try container.encode(self.uvIndex, forKey: .uvIndex)
        try container.encode(self.visibility, forKey: .visibility)
        try container.encode(self.weatherCodeValue, forKey: .weatherCodeValue)
        try container.encode(self.windDirection, forKey: .windDirection)
        try container.encode(self.windGust, forKey: .windGust)
        try container.encode(self.windSpeed, forKey: .windSpeed)
    }
}
