//
//  Location.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import CoreLocation

@Reducer
struct LocationFeature {
    @ObservableState
    struct State: Equatable {
        var locationPlace: GeocodingPlace?
        var selectedPlace: GeocodingPlace?
        var locationPermission: CLAuthorizationStatus?
        var errorText = ""
    }

    enum Action {
        case requestLocationPermission
        case requestLocation
        case locationPermissionResponse(CLAuthorizationStatus)
        case locationResponse(GeocodingPlace)
        case setErrorText(String)
        case openSettings
    }

    @Dependency(\.locationManager) var locationManager
    @Dependency(\.openSettings) var openSettings
    @Dependency(\.geocodingClient) var geocodingClient

    var body: some Reducer<State, Action> {
        Reduce { state, action in
            switch action {
            case .requestLocationPermission:
                return .run { send in
                    locationManager.requestPermission()
                    await send(.locationPermissionResponse(locationManager.authorizationStatus))
                }
            case .requestLocation:
                locationManager.startUpdatingLocation()
                return .run { send in
                    do {
                        guard let location = locationManager.location else { return }
                        let plate = try await geocodingClient.reverseGeocode(latitude: location.coordinate.latitude,
                                                                             longitude: location.coordinate.longitude)
                        await send(.locationResponse(plate))
                    } catch {
                        await send(.setErrorText(error.localizedDescription))
                    }
                }
            case let .locationPermissionResponse(response):
                state.locationPermission = response
                return .run { send in
                    switch response {
                    case .authorizedAlways, .authorizedWhenInUse:
                        do {
                            guard let location = locationManager.location else { return }
                            let place = try await geocodingClient.reverseGeocode(latitude: location.coordinate.latitude,
                                                                                 longitude: location.coordinate.longitude)

                            await send(.locationResponse(place))
                        } catch {
                            await send(.setErrorText(error.localizedDescription))
                        }
                        default:
                            break
                    }
                }
            case let .locationResponse(place):
                state.locationPlace = place

                return .none
            case .setErrorText(let text):
                state.errorText = text
                
                return .none
            case .openSettings:
                return .run { _ in
                    await self.openSettings()
                }
            }
        }
    }
}
