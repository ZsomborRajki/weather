//
//  LiveGeocodingClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import CoreLocation
import Shared

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

                return GeocodingPlace(city: landmark.locality,
                                      postalCode: landmark.postalCode,
                                      state: landmark.administrativeArea,
                                      country: landmark.country,
                                      latitude: latitude,
                                      longitude: longitude)
            }
        },
        reverseGeocode: { latitude, longitude in
            let geocoder = CLGeocoder()
            let clLocation = CLLocation(latitude: latitude, longitude: longitude)
            let placemarks = try await geocoder.reverseGeocodeLocation(clLocation)

            guard let landmark = placemarks.first else {
                throw GeocodingError.noResults
            }

            return GeocodingPlace(
                city: landmark.locality,
                postalCode: landmark.postalCode,
                state: landmark.administrativeArea,
                country: landmark.country,
                latitude: latitude,
                longitude: longitude
            )
        }
    )
}
