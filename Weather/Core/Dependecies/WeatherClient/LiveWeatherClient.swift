//
//  LiveWeatherClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Shared

extension WeatherApiClient: DependencyKey {
    static let platformFileStore = PlatformFileStore()
    static let platformSettingStore = PlatformSettingStore()
    static let client = WeatherClient(appId: "1I5rQGUBnsiEPfCHJuu5AgRT7QbVeB1t",
                                      platformFileStore: platformFileStore,
                                      platformSettingStore: platformSettingStore)

    static let liveValue = WeatherApiClient(
        forecast: { place in
            let result = try await client.requestWeatherForecast(latitude: place.latitude,
                                                                 longitude: place.longitude,
                                                                 units: .metric,
                                                                 cachePolicy: .companion.DEFAULT)

            if let data = result as? ResponseSuccess, let data = data.data {
                return data
            } else if let data = result as? ResponseFromCache, let data = data.data  {
                return data
            } else {
                throw WeatherApiError.error
            }
        }
    )
}

enum WeatherApiError: LocalizedError {
    case error

    var errorDescription: String? {
        switch self {
        case .error: "Error fetiching data"
        }
    }
}
