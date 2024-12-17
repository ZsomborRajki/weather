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
    @Bindable var store: StoreOf<Days>

    var body: some View {
        ScrollView {
            if store.isLoading {
                HStack {
                    Spacer()

                    ProgressView()
                        .foregroundColor(.white)

                    Spacer()
                }
            } else if !store.errorText.isEmpty {
                errorState
            } else {
                VStack(spacing: 8) {
                    header

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
        .background(Color(.background))
        .navigationDestination(item: $store.scope(state: \.dayDetails,
                                                  action: \.dayDetails)) { store in
            DayDetailsView(store: store)
        }
        .navigationTitle("Weather forecast")
    }

    private var header: some View {
        HStack {
            Text("Location")

            Spacer()

            Button {

            } label: {
                Text(store.place.city ?? store.place.state ?? "City")
                    .padding(12)
                    .background(
                        RoundedRectangle(cornerRadius: 8)
                            .stroke(Color.white)
                    )
            }
            .buttonStyle(.plain)
        }
        .padding(.bottom, 16)
    }

    private func itemView(item: TimelineItem<DataValuesDaily>) -> some View {
        Button {
            store.send(.selectDayItem(item))
        } label: {
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
        .buttonStyle(.plain)
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
