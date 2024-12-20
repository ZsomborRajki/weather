//
//  Location.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import CoreLocation
import SwiftUI

@Reducer
struct LocationFeature {
    @ObservableState
    struct State: Equatable {
        var locationPlace: GeocodingPlace?
        var selectedPlace: GeocodingPlace?
        var savedPlaces = [GeocodingPlace]()
        var locationPermission: CLAuthorizationStatus?
        var scenePhase: ScenePhase = .inactive
        @Presents public var search: Search.State?
    }

    enum Action {
        case onAppear
        case onDisappear
        case requestLocationPermission
        case requestLocation
        case locationPermissionResponse(CLAuthorizationStatus)
        case locationResponse(GeocodingPlace)
        case openSettings
        case scenePhaseChanged(ScenePhase)
        case selectPlace(GeocodingPlace)
        case readSavedPlaces
        case savedPlacesResult([GeocodingPlace])
        case search(PresentationAction<Search.Action>)
        case searchTapped
    }

    @Dependency(\.locationManager) var locationManager
    @Dependency(\.openSettings) var openSettings
    @Dependency(\.geocodingClient) var geocodingClient
    @Dependency(\.dismiss) var dismiss
    @Dependency(\.storageClient) var storageClient

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .onAppear:
                return .concatenate([
                    .send( .requestLocationPermission),
                    .send(.requestLocation),
                    .send(.readSavedPlaces)
                ])
            case .onDisappear:
                locationManager.stopUpdatingLocation()
                return .none
            case let .scenePhaseChanged(phase):
                state.scenePhase = phase
                if phase == .active {
                    return .concatenate([
                        .send(.requestLocationPermission),
                        .send(.requestLocation)
                    ])
                }
                return .none
            case .requestLocationPermission:
                return .run { send in
                    locationManager.requestPermission()
                    for await status in locationManager.authorizationStatusUpdates() {
                        await send(.locationPermissionResponse(status))
                    }
                }
            case .requestLocation:
                locationManager.startUpdatingLocation()
                return .run { send in
                    guard let place = await getPlace() else { return }
                    await send(.locationResponse(place))
                }
            case let .locationPermissionResponse(response):
                state.locationPermission = response
                return .run { send in
                    switch response {
                    case .authorizedAlways, .authorizedWhenInUse:
                        guard let place = await getPlace() else { return }
                        await send(.locationResponse(place))
                    default: return
                    }
                }
            case let .locationResponse(place):
                state.locationPlace = place

                return .none
            case .selectPlace:
                locationManager.stopUpdatingLocation()
                return .run { _ in
                    await self.dismiss()
                }
            case .openSettings:
                return .run { _ in
                    await self.openSettings()
                }
            case .readSavedPlaces:
                return .run { send in
                    let places = try storageClient.loadPlaces()
                    await send(.savedPlacesResult(places))
                }
            case let .savedPlacesResult(places):
                state.savedPlaces = places

                return .none
            case .searchTapped:
                state.search = Search.State()

                return .none
            case .search:
                return .none
            }
        }
        .ifLet(\.$search, action: \.search) {
            Search()
        }
    }

     private func getPlace() async -> GeocodingPlace? {
        guard let location = locationManager.location,
              let place = try? await geocodingClient.reverseGeocode(latitude: location.coordinate.latitude,
                                                                    longitude: location.coordinate.longitude) else {
            return nil
        }

        return place
    }
}
