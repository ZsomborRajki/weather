//
//  GeocodingPlace.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Foundation

struct GeocodingPlace: Equatable, Identifiable {
    let id = UUID()
    let city: String?
    let postalCode: String?
    let state: String?
    let country: String?
    let latitude: Double
    let longitude: Double
}
