//
//  MockGeocodingClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Shared

extension GeocodingPlace {
    static let mock = GeocodingPlace(city: "Budapest",
                                     postalCode: "1194",
                                     state: nil,
                                     country: "Hungary",
                                     location: .mock)
}
