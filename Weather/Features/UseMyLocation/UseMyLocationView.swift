//
//  UseMyLocationView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 18..
//

import ComposableArchitecture
import SwiftUI

struct UseMyLocationView: View {
    @Bindable var store: StoreOf<UseMyLocation>
    @Environment(\.scenePhase) private var scenePhase

    var body: some View {
        VStack(alignment: .leading, spacing: 24) {
            Text("Grant location authorisations")
                .font(.title2)

            Text("""
                 To be able to access your location, the app requires authorisation to do so.
                 Your phone must also support
                 """)

            CurrentLocationSection(place: store.locationPlace,
                                   locationPermission: store.locationPermission,
                                   openSettings: {
                store.send(.openSettings)
            }, selectPlace: { place in
                store.send(.selectPlace(place))
            })

            Spacer()
        }
        .frame(maxWidth: .infinity)
        .padding()
        .onAppear {
            store.send(.onAppear)
        }
        .onDisappear {
            store.send(.onDisappear)
        }
        .onChange(of: scenePhase) { _, phase in
            store.send(.scenePhaseChanged(phase))
        }
        .background(Color(.background))
        .navigationDestination(item: $store.scope(state: \.days, action: \.days)) { store in
            DaysView(store: store)
        }
        .navigationTitle("Use my location")
    }
}

#Preview {
    UseMyLocationView(store: Store(initialState: UseMyLocation.State(locationPlace: .mock)) {
        UseMyLocation()
    })
    .preferredColorScheme(.dark)
}
