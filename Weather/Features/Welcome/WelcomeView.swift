//
//  WelcomeView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI
import Shared

struct WelcomeView: View {
    @Bindable var store: StoreOf<Welcome>

    var body: some View {
        NavigationStack {
            VStack(alignment: .leading, spacing: 24) {
                Text("Welcome to the weather app!")
                    .font(.headline)
                    .accessibilityLabel("Welcome header")

                Text("To be able to start, we need a location for which the weather information can be retrieved.")

                Button("Enter location") {
                    store.send(.enterLocationTapped)
                }
                .buttonStyle(.secondary)
                .accessibilityAddTraits(.isButton)

                Button("Use my location") {
                    store.send(.useMyLocationTapped)
                }
                .buttonStyle(.primary)
                .accessibilityAddTraits(.isButton)

                Spacer()
            }
            .navigationDestination(item: $store.scope(state: \.search, action: \.search)) { store in
                SearchView(store: store)
            }
            .navigationDestination(item: $store.scope(state: \.myLocation, action: \.myLocation)) { store in
                UseMyLocationView(store: store)
            }
            .padding()
            .background(Color(.background))
            .navigationTitle("Welcome")
        }
        .accentColor(.white)
    }
}

#Preview {
    WelcomeView(store: Store(initialState: Welcome.State()) {
        Welcome()
    })
}
