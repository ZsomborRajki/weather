//
//  WelcomeView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI

struct WelcomeView: View {
    @Bindable var store: StoreOf<Welcome>

    var body: some View {
        NavigationStack {
            VStack(spacing: 24) {
                Text("Welcome to the weather app!")
                    .font(.largeTitle)

                Text("To be able to start, we need a location for which the weather information can be retrieved.")

                Button("Use my location") {
                    store.send(.search(.presented(.searchQueryChangeDebounced)))
                }
                .buttonStyle(.borderedProminent)
                .tint(.purple.opacity(0.3))

                Button("Use my location") {
                    store.send(.useMyLocationTapped)
                }
                .buttonStyle(.borderedProminent)
                .tint(.purple.opacity(0.3))

                Spacer()
            }
            .navigationDestination(item: $store.scope(state: \.search, action: \.search)) { store in
                SearchView(store: store)
            }
            .ignoresSafeArea()
        }
        .ignoresSafeArea()
    }
}
