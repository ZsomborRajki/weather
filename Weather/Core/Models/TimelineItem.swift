//
//  TimelineItem.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 16..
//

import Foundation
import SwiftData

@Model
final class TimelineItem: Codable {
    var time: Date
    var values: DataValuesMinutely

    init(time: Date, values: DataValuesMinutely) {
        self.time = time
        self.values = values
    }

    enum CodingKeys: CodingKey {
        case time, values
    }

    required init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)
        self.time = try container.decode(Date.self, forKey: .time)
        self.values = try container.decode(DataValuesMinutely.self, forKey: .values)
    }

    func encode(to encoder: any Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(self.time, forKey: .time)
        try container.encode(self.values, forKey: .values)
    }
}
