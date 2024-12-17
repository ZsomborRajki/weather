//
//  GeocodingResult.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Foundation
import Shared

struct GeocodingResult: Equatable, Identifiable {
    let id = UUID()
    let city: String?
    let postalCode: String?
    let state: String?
    let country: String?
    let location: Location
}
