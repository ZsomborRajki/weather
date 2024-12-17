//
//  LiveLocationClient.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import CoreLocation
import SwiftUI
import ComposableArchitecture

// MARK: - LocationManaging

protocol LocationManaging: ObservableObject {
    var location: CLLocation? { get }
    var authorizationStatus: CLAuthorizationStatus { get }
    var error: Error? { get }

    func requestPermission()
    func startUpdatingLocation()
    func stopUpdatingLocation()
}

// MARK: - LocationManager

class LocationManager: NSObject, LocationManaging {
    let locationManager = CLLocationManager()

    var location: CLLocation?
    var authorizationStatus: CLAuthorizationStatus
    var error: Error?

    override init() {
        authorizationStatus = locationManager.authorizationStatus

        super.init()
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.distanceFilter = 10
    }

    func requestPermission() {
        locationManager.requestWhenInUseAuthorization()
    }

    func startUpdatingLocation() {
        locationManager.startUpdatingLocation()
    }

    func stopUpdatingLocation() {
        locationManager.stopUpdatingLocation()
    }
}

// MARK: - CLLocationManagerDelegate

extension LocationManager: CLLocationManagerDelegate {
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        location = locations.last
    }

    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        self.error = error
    }

    func locationManagerDidChangeAuthorization(_ manager: CLLocationManager) {
        authorizationStatus = manager.authorizationStatus
    }
}

// MARK: - TCA Dependencies

extension DependencyValues {
    var locationManager: any LocationManaging {
        get { self[LocationManagerKey.self] }
        set { self[LocationManagerKey.self] = newValue }
    }
}

private enum LocationManagerKey: DependencyKey {
    static let liveValue: any LocationManaging = LocationManager()

    static let testValue: any LocationManaging = LocationManager()
}
