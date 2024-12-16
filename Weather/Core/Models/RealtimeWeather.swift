//
//  RealtimeWeather.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 16..
//

import Foundation
import SwiftData

@Model
final class RealtimeWeather: Codable {
    var location: Location
    var data: TimelineItem

    init(location: Location, data: TimelineItem) {
        self.location = location
        self.data = data
    }

    enum CodingKeys: CodingKey {
        case location, data
    }

    required init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)
        self.location = try container.decode(Location.self, forKey: .location)
        self.data = try container.decode(TimelineItem.self, forKey: .data)
    }

    func encode(to encoder: any Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(self.location, forKey: .location)
        try container.encode(self.data, forKey: .data)
    }
}
