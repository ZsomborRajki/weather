//
//  UseMyLocation.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 18..
//

import ComposableArchitecture
import CoreLocation
import SwiftUI

@Reducer
struct UseMyLocation {
    @ObservableState
    struct State: Equatable {
        var locationPlace: GeocodingPlace?
        var locationPermission: CLAuthorizationStatus?
        var scenePhase: ScenePhase = .inactive
        @Presents public var days: Days.State?
    }

    enum Action {
        case onAppear
        case onDisappear
        case openSettings
        case scenePhaseChanged(ScenePhase)
        case requestLocationPermission
        case requestLocation
        case locationPermissionResponse(CLAuthorizationStatus)
        case locationResponse(GeocodingPlace)
        case selectPlace(GeocodingPlace)
        case days(PresentationAction<Days.Action>)
    }

    @Dependency(\.locationManager) var locationManager
    @Dependency(\.openSettings) var openSettings
    @Dependency(\.geocodingClient) var geocodingClient

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .onAppear:
                return .concatenate([
                    .send(.requestLocationPermission),
                    .send(.requestLocation)
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
            case .openSettings:
                return .run { _ in
                    await self.openSettings()
                }
            case let .selectPlace(place):
                state.days = Days.State(place: place)

                return .none
            case .days:
                return .none
            }
        }
        .ifLet(\.$days, action: \.days) {
            Days()
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
