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
    @Bindable var store: StoreOf<LocationFeature>
    @Environment(\.scenePhase) private var scenePhase

    var body: some View {
        ScrollView {
            VStack(alignment: .leading, spacing: 16) {
                Text("""
                 You can use the location from your device or by searching a manual location.
                 Manual searched locations can be saved to find them later easily
                 while you were out looked by multiple locations.
                 """)

                Divider()

                CurrentLocationSection(place: store.locationPlace,
                                       selectedPlace: store.selectedPlace,
                                       locationPermission: store.locationPermission,
                                       openSettings: {
                    store.send(.openSettings)
                }, selectPlace: { place in
                    store.send(.selectPlace(place))
                })

                HStack(spacing: 8) {
                    Image(systemName: "tray.and.arrow.down")

                    Text("Saved locations")
                }
                .accessibilityElement(children: .combine)
                .accessibilityLabel("Saved places label")

                ForEach(store.savedPlaces) { place in
                    PlaceCard(place: place, selectedPlace: store.selectedPlace) {
                        store.send(.selectPlace(place))
                    }
                    .overlay {
                        HStack {
                            Spacer()

                            Image(systemName: "tray.and.arrow.down")
                        }
                        .padding()
                        .accessibilityHidden(true)
                    }
                }

                Spacer()
            }
        }
        .onAppear {
            store.send(.onAppear)
        }
        .onDisappear {
            store.send(.onDisappear)
        }
        .onChange(of: scenePhase) { _, phase in
            store.send(.scenePhaseChanged(phase))
        }
        .padding()
        .background(Color(.background))
        .navigationTitle("Location")
        .edgesIgnoringSafeArea(.bottom)
        .overlay(alignment: .bottom) {
            Button {
                store.send(.searchTapped)
            } label: {
                HStack(spacing: 8) {
                    Image(systemName: "magnifyingglass")

                    Text("Go to search")
                }
                .accessibilityElement(children: .combine)
            }
            .padding()
            .buttonStyle(.secondary)
        }
        .navigationDestination(item: $store.scope(state: \.search, action: \.search)) { store in
            SearchView(store: store)
        }
    }
}

#Preview {
    LocationView(store: Store(initialState: LocationFeature.State(locationPlace: .mock)) {
        LocationFeature()
    })
    .preferredColorScheme(.dark)
}
