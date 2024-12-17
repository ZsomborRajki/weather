//
//  WeatherClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Shared

@DependencyClient
struct WeatherApiClient {
    var forecast: @Sendable (_ place: GeocodingPlace) async throws -> WeatherForecast
}

extension WeatherApiClient: TestDependencyKey {
    static let previewValue = Self(
        forecast: { _ in .mock }
    )

    static let testValue = Self()
}

extension DependencyValues {
    var weatherClient: WeatherApiClient {
        get { self[WeatherApiClient.self] }
        set { self[WeatherApiClient.self] = newValue }
    }
}
