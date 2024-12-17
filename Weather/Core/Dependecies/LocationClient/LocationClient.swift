//
//  LocationClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import CoreLocation

@DependencyClient
struct LocationClient {
    var getCurrentPermissionState: @Sendable () -> CLAuthorizationStatus = { .notDetermined }
    var requestPermission: @Sendable () async -> CLAuthorizationStatus = { .notDetermined }
    var getCurrentPlace: @Sendable () async throws -> GeocodingPlace?
}

enum LocationError: LocalizedError {
    case permissionDenied
    case locationDisabled
    case requestCancelled

    var errorDescription: String? {
        switch self {
        case .permissionDenied: "Location permission denied"
        case .locationDisabled: "Location services are disabled"
        case .requestCancelled: "Location request cancelled"
        }
    }
}

extension LocationClient: TestDependencyKey {
    static let testValue = LocationClient(
        getCurrentPermissionState: {
            .authorizedWhenInUse
        },
        requestPermission: {
            .authorizedWhenInUse
        },
        getCurrentPlace: {
            .mock
        }
    )

    static let deniedValue = LocationClient(
        getCurrentPermissionState: {
            .denied
        },
        requestPermission: {
            .denied
        },
        getCurrentPlace: {
            throw LocationError.permissionDenied
        }
    )
}

extension DependencyValues {
    var locationClient: LocationClient {
        get { self[LocationClient.self] }
        set { self[LocationClient.self] = newValue }
    }
}
