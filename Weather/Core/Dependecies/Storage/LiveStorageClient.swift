//
//  LiveStorageClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Foundation

extension StorageClient: DependencyKey {
    static let liveValue = StorageClient { place in
        let currentPlaces = (try? loadCurrentPlaces()) ?? []

        var updatedPlaces = currentPlaces
        updatedPlaces.append(place)

        let encoder = JSONEncoder()
        do {
            let encoded = try encoder.encode(updatedPlaces)
            UserDefaults.standard.set(encoded, forKey: "places")
        } catch {
            throw StorageError.encodingError
        }
    } loadPlaces: {
        try loadCurrentPlaces()
    }

    private static func loadCurrentPlaces() throws -> [GeocodingPlace] {
        guard let data = UserDefaults.standard.data(forKey: "places") else {
            return []
        }

        let decoder = JSONDecoder()
        do {
            return try decoder.decode([GeocodingPlace].self, from: data)
        } catch {
            throw StorageError.decodingError
        }
    }
}


