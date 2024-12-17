//
//  GeocodingClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Foundation
import ComposableArchitecture
import CoreLocation
import Shared

@DependencyClient
struct GeocodingClient {
    var geocode: (_ address: String) async throws -> [GeocodingPlace]
}

extension GeocodingClient: DependencyKey {
    static let liveValue = GeocodingClient(
        geocode: { address in
            let geocoder = CLGeocoder()
            let placemarks = try await geocoder.geocodeAddressString(address)

            guard !placemarks.isEmpty else {
                throw GeocodingError.noResults
            }

            return placemarks.compactMap { landmark in
                guard let longitude = landmark.location?.coordinate.longitude,
                      let latitude = landmark.location?.coordinate.latitude else {
                    return nil
                }

                let location = Location(lat: KotlinDouble(value: longitude),
                                        lon: KotlinDouble(value: latitude),
                                        name: landmark.locality ?? landmark.administrativeArea,
                                        type: nil)

                return GeocodingPlace(city: landmark.locality,
                                       postalCode: landmark.postalCode,
                                       state: landmark.administrativeArea,
                                       country: landmark.country,
                                       location: location)
            }
        }
    )
}

extension GeocodingClient: TestDependencyKey {
    static let testValue = GeocodingClient(
        geocode: { address in
            [
                GeocodingPlace(
                    city: "Test City",
                    postalCode: "30000",
                    state: "Test state",
                    country: "Test Country",
                    location: Location(lat: nil, lon: nil, name: nil, type: nil)
                )
            ]
        }
    )
}

enum GeocodingError: LocalizedError {
    case noResults

    var errorDescription: String? {
        switch self {
        case .noResults:
            return "No geocoding results found"
        }
    }
}

extension DependencyValues {
    var geocodingClient: GeocodingClient {
        get { self[GeocodingClient.self] }
        set { self[GeocodingClient.self] = newValue }
    }
}
