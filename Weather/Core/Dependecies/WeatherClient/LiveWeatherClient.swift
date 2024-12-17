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
            guard let latitude = place.location.lat, let longitude = place.location.lon else {
                throw WeatherApiError.missingRequestData
            }

            let result = try await client.requestWeatherForecast(latitude: latitude.doubleValue,
                                                                 longitude: longitude.doubleValue,
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
    case missingRequestData
    case emptyReposnse
    case error
    case failure(String)
}
