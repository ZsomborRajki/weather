//
//  DaysView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI
import Foundation
import Shared

struct DaysView: View {
    let store: StoreOf<Days>

    var body: some View {
        ScrollView {
            if store.isLoading {
                ProgressView()
                    .foregroundColor(.white)
            } else if !store.errorText.isEmpty {
                errorState
            } else {
                VStack(spacing: 8) {
                    HStack {
                        Text("Location")

                        Spacer()

                        Button {

                        } label: {
                            Text(store.place.city ?? store.place.state ?? "City")
                        }
                    }
                    .padding(.bottom, 16)

                    if let forecast = store.forecast {
                        ForEach(forecast.timelines.daily, id: \.self) {
                            itemView(item: $0)
                        }
                    }

                    Spacer()
                }

            }
        }
        .onAppear {
            store.send(.fetchForecast)
        }
        .refreshable {
            await store.send(.fetchForecast).finish()
        }
        .padding()
        .navigationTitle("Weather forecast")
    }

    private func itemView(item: TimelineItem<DataValuesDaily>) -> some View {
        HStack {
            VStack(alignment: .leading, spacing: 8) {
                let date = item.time.asSwiftDate

                Text(date, format: .dateTime.weekday(.wide))
                    .bold()

                Text(date, format: .dateTime.day().month(.defaultDigits).year())
            }

            Spacer()
        }
        .padding()
        .background(
            RoundedRectangle(cornerRadius: 8)
                .fill(Color(.disabledDark))
                .stroke(Color.white)
        )
    }

    private var errorState: some View {
        VStack(alignment: .leading, spacing: 24) {
            Text("Sorry a failure happened")
                .font(.headline)

            Text("Error: \(store.errorText)")

            Text("""
                Please try the following steps and try again.
                 • Check the internet connection
                 • Make sure that your location services are switched on
                """)
            
            Button("Try again") {
                store.send(.fetchForecast)
            }
            .buttonStyle(.primary)

            Spacer()
        }
    }
}

#Preview {
    DaysView(store: Store(initialState: Days.State(place: .mock)) {
        Days()
    })
    .preferredColorScheme(.dark)
}
