//
//  StoreageClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import Foundation

@DependencyClient
struct StorageClient {
    var saveplace: (GeocodingPlace) throws -> Void
    var loadPlaces: () throws -> [GeocodingPlace]
}

extension StorageClient: TestDependencyKey {
    static let testValue = StorageClient(
        saveplace: { _ in },
        loadPlaces: { [] }
    )
}

enum StorageError: LocalizedError {
    case noData
    case encodingError
    case decodingError

    var errorDescription: String? {
        switch self {
        case .noData: "No data"
        case .encodingError: "Encoding error"
        case .decodingError: "Decoding error"
        }
    }
}

extension DependencyValues {
    var storageClient: StorageClient {
        get { self[StorageClient.self] }
        set { self[StorageClient.self] = newValue }
    }
}
