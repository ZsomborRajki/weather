//
//  GeocodingClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Shared

@DependencyClient
struct GeocodingClient {
    var geocode: (_ address: String) async throws -> [GeocodingPlace]
    var reverseGeocode: (_ latitude: Double, _ longitude: Double) async throws -> GeocodingPlace
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
                    latitude: 47,
                    longitude: 19
                )
            ]
        }, reverseGeocode: { latitude, longitude in
            GeocodingPlace(
                city: "Test City",
                postalCode: "30000",
                state: "Test state",
                country: "Test Country",
                latitude: 47,
                longitude: 19
            )
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
