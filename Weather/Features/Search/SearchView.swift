//
//  SearchView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI

struct SearchView: View {
    @Bindable var store: StoreOf<Search>

    var body: some View {
        VStack(alignment: .leading, spacing: 24) {
            Text("Search your location:")
                .font(.headline)
                .padding(.bottom, 8)
                .accessibilityLabel("Location search title")

            Text("Search for your location in the following text field and then select it from the list")
                .accessibilityLabel("Location search description")

            TextField("\(Image(systemName: "magnifyingglass")) Location", text: $store.searchQuery.sending(\.searchQueryChanged))
                .onAppear {
                    UITextField.appearance().clearButtonMode = .whileEditing
                }
                .padding(16)
                .background(
                    RoundedRectangle(cornerRadius: 8)
                        .stroke(Color.white)
                )

            Button("Done") {
                store.send(.doneTapped)
            }
            .buttonStyle(.primary)
            .accessibilityAddTraits(.isButton)
            .disabled(store.selectedPlace == nil)

            ForEach(store.places) { place in
                PlaceCard(place: place, selectedPlace: store.selectedPlace) {
                    store.send(.selectPlace(place))
                }
            }

            Spacer()
        }
        .padding()
        .navigationTitle("Enter location")
        .navigationDestination(item: $store.scope(state: \.days, action: \.days)) { store in
            DaysView(store: store)
        }
        .background(Color(.background))
    }

   
}

#Preview {
    SearchView(store: Store(initialState: Search.State()) {
        Search()
    })
    .preferredColorScheme(.dark)
}
