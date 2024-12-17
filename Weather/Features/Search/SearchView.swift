//
//  SearchView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI
import Shared

struct SearchView: View {
    @Bindable var store: StoreOf<Search>

    var body: some View {
        VStack(alignment: .leading,spacing: 24) {
            Text("Search your location:")
                .font(.headline)
                .padding(.bottom, 8)

            Text("Search for your location in the following text field and then select it from the list")

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
            .disabled(store.selectedResult == nil)

            ForEach(store.results) { makeCityCard(result: $0) }

            Spacer()
        }
        .task(id: store.searchQuery) {
            do {
                try await Task.sleep(for: .milliseconds(300))
                await store.send(.searchQueryChangeDebounced).finish()
            } catch {}
        }
        .padding()
        .navigationTitle("Enter location")
        .navigationDestination(item: $store.scope(state: \.days, action: \.days)) { store in
            DaysView(store: store)
        }
    }

    private func makeCityCard(result: GeocodingResult) -> some View {
        Button {
            store.send(.selectResult(result))
        } label: {
            VStack(alignment: .leading, spacing: 16) {
                if let city = result.city {
                    Text(city)
                        .font(.caption)
                }

                HStack {
                    if let postalCode = result.postalCode {
                        Text("\(postalCode) -")
                    }

                    if let state = result.state {
                        Text("\(state) -")
                    }

                    if let country = result.country {
                        Text(country)
                    }

                    Spacer()
                }
            }
            .padding()
            .background(
                RoundedRectangle(cornerRadius: 16)
                    .fill(store.selectedResult == result ? Color(.purple) : Color(.pressedDark))
                    .stroke(Color.white)
            )
        }
        .buttonStyle(.plain)
    }
}

#Preview {
    SearchView(store: Store(initialState: Search.State()) {
        Search()
    })
    .preferredColorScheme(.dark)
}
