//
//  LocationView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI
import CoreLocation

struct LocationView: View {
    let store: StoreOf<LocationFeature>

    var body: some View {
        VStack(alignment: .leading, spacing: 16) {
            Text("""
                 You can use the location from your device or by searching a manual location.
                 Manual searched locations can be saved to find them later easily while you were out looked by multiple locations.
                 """)

            Divider()

            HStack(spacing: 8) {
                Image(systemName: "location.fill")

                Text("Current location")
            }
            .accessibilityElement(children: .combine)
            .accessibilityLabel("Current location indicator")

            if let place = store.locationPlace {
                PlaceCard(place: place, selectedPlace: store.selectedPlace) {
                    print("asd")
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

            if store.locationPermission == .denied ||
                store.locationPermission == .restricted {
                VStack {
                    Image(systemName: "location.slash")
                        .resizable()
                        .frame(width: 24, height: 24)

                    Text("Location services currently disabled")
                        .padding(.bottom, 12)

                    Button {
                        store.send(.openSettings)
                    } label: {
                        HStack {
                            Image(systemName: "gear")

                            Text("Go to settings")
                        }
                    }
                }
                .padding()
                .frame(maxWidth: .infinity)
                .background(
                    RoundedRectangle(cornerRadius: 16)
                        .stroke(Color.white)
                )
            }

            Spacer()

        }
        .onAppear {
            store.send(.requestLocationPermission)
            store.send(.requestLocation)
        }
        .padding()
        .background(Color(.background))
        .navigationTitle("Location")
    }
}

#Preview {
    LocationView(store: Store(initialState: LocationFeature.State(locationPlace: .mock)) {
        LocationFeature()
    })
    .preferredColorScheme(.dark)
}
