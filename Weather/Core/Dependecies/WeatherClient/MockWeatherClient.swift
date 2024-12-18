//
//  MockWeatherClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Shared

extension WeatherForecast {
    static let mock = WeatherForecast(location: .mock, timelines: .mock)
}

extension Location {
    static let mock = Location(lat: KotlinDouble(47.4421269),
                               lon: KotlinDouble(19.1447841),
                               name: "Budapest",
                               type: nil)
}

extension WeatherForecastTimelines {
    static let mock = WeatherForecastTimelines(minutely: [], hourly: [], daily: .mock)
}

extension [TimelineItem<DataValuesDaily>] {
    static let mock = [TimelineItem<DataValuesDaily>(time: .mockNow, values: .mock)]
}

extension DataValuesDaily {
    static let mock = DataValuesDaily(
        // Cloud base (in meters)
        cloudBaseAvg: 1500.0,
        cloudBaseMax: 2000.0,
        cloudBaseMin: 1000.0,

        // Cloud ceiling (in meters)
        cloudCeilingAvg: 3000.0,
        cloudCeilingMax: 3500.0,
        cloudCeilingMin: 2500.0,

        // Cloud cover (0-1)
        cloudCoverAvg: 0.45,
        cloudCoverMax: 0.8,
        cloudCoverMin: 0.1,

        // Dew point (°C)
        dewPointAvg: 12.0,
        dewPointMax: 15.0,
        dewPointMin: 8.0,

        // Evapotranspiration (mm)
        evapotranspirationAvg: 0.15,
        evapotranspirationMax: 0.25,
        evapotranspirationMin: 0.05,
        evapotranspirationSum: 3.6,

        // Freezing rain intensity (mm/hr)
        freezingRainIntensityAvg: 0.0,
        freezingRainIntensityMax: 0.0,
        freezingRainIntensityMin: 0.0,

        // Humidity (%)
        humidityAvg: 65.0,
        humidityMax: 80.0,
        humidityMin: 50.0,

        // Ice accumulation (mm)
        iceAccumulationAvg: 0.0,
        iceAccumulationLweAvg: 0.0,
        iceAccumulationLweMax: 0.0,
        iceAccumulationLweMin: 0.0,
        iceAccumulationMax: 0.0,
        iceAccumulationMin: 0.0,
        iceAccumulationSum: 0.0,

        // Moon times
        moonriseTime: .mockNow,
        moonsetTime: .mockNow,

        // Precipitation probability (0-1)
        precipitationProbabilityAvg: 0.3,
        precipitationProbabilityMax: 0.6,
        precipitationProbabilityMin: 0.1,

        // Pressure (hPa)
        pressureSurfaceLevelAvg: 1013.25,
        pressureSurfaceLevelMax: 1015.0,
        pressureSurfaceLevelMin: 1011.0,

        // Rain accumulation (mm)
        rainAccumulationAvg: 2.5,
        rainAccumulationLweAvg: 2.5,
        rainAccumulationLweMax: 5.0,
        rainAccumulationLweMin: 0.0,
        rainAccumulationMax: 5.0,
        rainAccumulationMin: 0.0,
        rainAccumulationSum: 60.0,

        // Rain intensity (mm/hr)
        rainIntensityAvg: 0.5,
        rainIntensityMax: 2.0,
        rainIntensityMin: 0.0,

        // Sleet accumulation (mm)
        sleetAccumulationAvg: 0.0,
        sleetAccumulationLweAvg: 0.0,
        sleetAccumulationLweMax: 0.0,
        sleetAccumulationLweMin: 0.0,
        sleetAccumulationMax: 0.0,
        sleetAccumulationMin: 0.0,

        // Sleet intensity (mm/hr)
        sleetIntensityAvg: 0.0,
        sleetIntensityMax: 0.0,
        sleetIntensityMin: 0.0,

        // Snow accumulation (mm)
        snowAccumulationAvg: 0.0,
        snowAccumulationLweAvg: 0.0,
        snowAccumulationLweMax: 0.0,
        snowAccumulationLweMin: 0.0,
        snowAccumulationMax: 0.0,
        snowAccumulationMin: 0.0,
        snowAccumulationSum: 0.0,

        // Snow depth (cm)
        snowDepthAvg: KotlinDouble(0.0),
        snowDepthMax: KotlinDouble(0.0),
        snowDepthMin: KotlinDouble(0.0),
        snowDepthSum: KotlinDouble(0.0),

        // Snow intensity (mm/hr)
        snowIntensityAvg: 0.0,
        snowIntensityMax: 0.0,
        snowIntensityMin: 0.0,

        // Sun times
        sunriseTime: .mockSunrise,
        sunsetTime: .mockSunset,

        // Temperature apparent (°C)
        temperatureApparentAvg: 22.0,
        temperatureApparentMax: 26.0,
        temperatureApparentMin: 18.0,

        // Temperature actual (°C)
        temperatureAvg: 23.0,
        temperatureMax: 27.0,
        temperatureMin: 19.0,

        // UV data
        uvHealthConcernAvg: KotlinInt(2),
        uvHealthConcernMax: KotlinInt(3),
        uvHealthConcernMin: KotlinInt(1),
        uvIndexAvg: KotlinInt(5),
        uvIndexMax: KotlinInt(7),
        uvIndexMin: KotlinInt(3),

        // Visibility (km)
        visibilityAvg: 15.0,
        visibilityMax: 20.0,
        visibilityMin: 10.0,

        // Weather codes
        weatherCodeMaxValue: 1000,
        weatherCodeMinValue: 1000,

        // Wind direction (degrees)
        windDirectionAvg: 180.0,

        // Wind gust (m/s)
        windGustAvg: 5.0,
        windGustMax: 8.0,
        windGustMin: 2.0,

        // Wind speed (m/s)
        windSpeedAvg: 3.0,
        windSpeedMax: 5.0,
        windSpeedMin: 1.0
    )
}

extension Kotlinx_datetimeInstant {
    static let mockNow = Kotlinx_datetimeInstant.companion.fromEpochMilliseconds(epochMilliseconds: 1734448355000)
    static let mockSunrise = Kotlinx_datetimeInstant.companion.fromEpochMilliseconds(epochMilliseconds: 1734405155000)
    static let mockSunset = Kotlinx_datetimeInstant.companion.fromEpochMilliseconds(epochMilliseconds: 1734189155000)
}
