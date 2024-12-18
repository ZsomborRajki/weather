//
//  CurrentLocationSection.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 18..
//

import CoreLocation
import SwiftUI

struct CurrentLocationSection: View {
    let place: GeocodingPlace?
    var selectedPlace: GeocodingPlace?
    let locationPermission: CLAuthorizationStatus?
    let openSettings: () -> Void
    let selectPlace: (GeocodingPlace) -> Void

    var body: some View {
        VStack(alignment: .leading, spacing: 24) {
            HStack(spacing: 8) {
                Image(systemName: place != nil ? "location.fill" : "location.slash.fill")

                Text("Current location")
            }
            .accessibilityElement(children: .combine)
            .accessibilityLabel("Current location label")

            locationPlaceCard

            if locationPermission == .denied ||
                locationPermission == .restricted {
                settingsView
            }
        }
    }

    @ViewBuilder
    private var locationPlaceCard: some View {
        if let place {
            PlaceCard(place: place, selectedPlace: selectedPlace) {
                selectPlace(place)
            }
            .overlay {
                HStack {
                    Spacer()

                    Image(systemName: "location.fill")
                }
                .padding()
                .accessibilityHidden(true)
            }
        }
    }

    private var settingsView: some View {
        VStack {
            Image(systemName: "location.slash.fill")
                .resizable()
                .frame(width: 24, height: 24)

            Text("Location services currently disabled")
                .padding(.bottom, 12)

            Button {
                openSettings()
            } label: {
                HStack {
                    Image(systemName: "gear")

                    Text("Go to settings")
                }
            }
            .accessibilityAddTraits(.isButton)
        }
        .padding()
        .frame(maxWidth: .infinity)
        .background(
            RoundedRectangle(cornerRadius: 16)
                .stroke(Color.white)
        )
    }
}
