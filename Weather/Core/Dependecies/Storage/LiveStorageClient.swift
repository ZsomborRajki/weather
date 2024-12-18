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

        var updatedPlaces = Set(currentPlaces)
        updatedPlaces.insert(place)

        let encoder = JSONEncoder()
        do {
            let encoded = try encoder.encode(updatedPlaces)
            print(encoded)
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
            let places = try decoder.decode([GeocodingPlace].self, from: data)
            return places
        } catch {
            throw StorageError.decodingError
        }
    }
}
