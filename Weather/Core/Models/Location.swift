//
//  Location.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 16..
//

import Foundation
import SwiftData

@Model
final class Location: Codable {
    var lat: Double
    var lon: Double
    var name: String?
    var type: String?

    init(lat: Double, lon: Double, name: String? = nil, type: String? = nil) {
        self.lat = lat
        self.lon = lon
        self.name = name
        self.type = type
    }

    enum CodingKeys: CodingKey {
        case lat, lon, name, type
    }

    required init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)
        self.lat = try container.decode(Double.self, forKey: .lat)
        self.lon = try container.decode(Double.self, forKey: .lon)
        self.name = try container.decodeIfPresent(String.self, forKey: .name)
        self.type = try container.decodeIfPresent(String.self, forKey: .type)
    }

    func encode(to encoder: any Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(self.lat, forKey: .lat)
        try container.encode(self.lon, forKey: .lon)
        try container.encodeIfPresent(self.name, forKey: .name)
        try container.encodeIfPresent(self.type, forKey: .type)
    }
}
