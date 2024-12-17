//
//  PlaceCard.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import SwiftUI

struct PlaceCard: View {
    let place: GeocodingPlace
    let selectedPlace: GeocodingPlace?
    let onSelected: () -> Void

    var body: some View {
        Button {
            onSelected()
        } label: {
            VStack(alignment: .leading, spacing: 16) {
                if let city = place.city {
                    Text(city)
                        .bold()
                }

                HStack {
                    if let postalCode = place.postalCode {
                        Text("\(postalCode) -")
                    }

                    if let state = place.state {
                        Text("\(state) -")
                    }

                    if let country = place.country {
                        Text(country)
                    }

                    Spacer()
                }
            }
            .accessibilityElement(children: .combine)
            .padding()
            .background(
                RoundedRectangle(cornerRadius: 16)
                    .fill(selectedPlace == place ? Color(.purple) : Color(.pressedDark))
                    .stroke(Color.white)
            )
        }
        .buttonStyle(.plain)
    }
}

#Preview {
    PlaceCard(place: .mock, selectedPlace: .mock, onSelected: {})
}
