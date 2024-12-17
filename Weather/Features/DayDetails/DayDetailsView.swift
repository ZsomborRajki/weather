//
//  DayDetailsView.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI
import Shared

struct DayDetailsView: View {
    let store: StoreOf<DayDetails>

    @ViewBuilder
    var body: some View {
        if let values = store.item.values {
            VStack(alignment: .leading, spacing: 16) {
                HStack {
                    VStack(alignment: .leading, spacing: 8) {
                        Text("\(Int(values.temperatureMax)) ˚C")
                            .font(.title2)
                            .bold()

                        Text("Higest value")
                    }
                    .frame(maxWidth: .infinity, alignment: .leading)


                    VStack(alignment: .leading, spacing: 8) {
                        Text("\(Int(values.temperatureMin)) ˚C")
                            .font(.title2)
                            .bold()

                        Text("Lowest value")
                    }
                    .frame(maxWidth: .infinity, alignment: .leading)
                }

                Text(values.weatherMax.toString())
                    .bold()

                ProgressView("Avarage humidity",
                             value: store.item.values?.humidityAvg ?? 0,
                             total: 100)
                .tint(Color(.pink))
                .overlay(alignment: .topTrailing) {
                    Text("\(Int(values.humidityAvg)) %")
                }

                HStack {
                    Text("Average probability of rain")

                    Spacer()

                    Text("\(Int(values.precipitationProbabilityAvg * 100)) %")
                }

                HStack {
                    Text("Maximum UV Index")

                    Spacer()

                    Text("\(values.uvIndexMax?.intValue ?? 0)")
                }

                HStack {
                    Text("Maximum Wind speed")

                    Spacer()

                    Text("\(Int(values.windSpeedMax * 3.6)) km/h")
                }

                Text("Wind Direction")

                HStack {
                    Spacer()

                    VStack(spacing: 16) {
                        Image(systemName: "location.fill")
                            .resizable()
                            .frame(width: 60, height: 60)
                            .rotationEffect(Angle(degrees: -45 + values.windDirectionAvg))

                        Text(values.windDirection)
                    }

                    Spacer()
                }

                HStack {
                    Text("Avarage visibility")

                    Spacer()

                    Text("\(Int(values.visibilityAvg * 1000)) m")
                }

                Text("Sun position")

                if let sunriseTime = values.sunriseTime?.asSwiftDate,
                   let sunsetTime = values.sunsetTime?.asSwiftDate {
                    SunPositionChart(sunriseTime: sunriseTime,
                                     sunsetTime: sunsetTime,
                                     currentTime: Date())
                }

                Spacer()
            }
            .padding()
            .background(Color(.background))
            .navigationTitle("Tomorrow")
        }
    }
}
