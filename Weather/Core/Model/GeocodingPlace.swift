//
//  GeocodingPlace.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Foundation

struct GeocodingPlace: Equatable, Codable {
    let city: String?
    let postalCode: String?
    let state: String?
    let country: String?
    let latitude: Double
    let longitude: Double
}

extension GeocodingPlace: Identifiable, Hashable {
    var id: String { "\(latitude),\(longitude)" }
}
