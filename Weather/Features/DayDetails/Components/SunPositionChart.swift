//
//  SunPositionChart.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import Charts
import Foundation
import SwiftUI

struct SunPositionChart: View {
    let sunriseTime: Date
    let sunsetTime: Date
    let currentTime: Date

    private var data: [(Date, Double)] {
        // Create 24 data points for smooth curve
        let calendar = Calendar.current
        guard let startOfDay = calendar.date(bySettingHour: 0, minute: 0, second: 0, of: sunriseTime) else {
            return []
        }

        return stride(from: 0, through: 24, by: 1).map { hour in
            guard let time = calendar.date(byAdding: .hour, value: hour, to: startOfDay) else {
                return (startOfDay, 0)
            }

            let y = calculateYValue(for: time)
            return (time, y)
        }
    }

    private func calculateYValue(for time: Date) -> Double {
        let calendar = Calendar.current
        let secondsSinceMidnight = calendar.component(.hour, from: time) * 3600
        + calendar.component(.minute, from: time) * 60

        let sunriseSeconds = calendar.component(.hour, from: sunriseTime) * 3600
        + calendar.component(.minute, from: sunriseTime) * 60

        let sunsetSeconds = calendar.component(.hour, from: sunsetTime) * 3600
        + calendar.component(.minute, from: sunsetTime) * 60

        // Create a sine wave between sunrise and sunset
        let period = Double(sunsetSeconds - sunriseSeconds)

        if secondsSinceMidnight < sunriseSeconds || secondsSinceMidnight > sunsetSeconds {
            return 0
        }

        return sin(Double.pi * (Double(secondsSinceMidnight - sunriseSeconds) / period))
    }

    var body: some View {
        GeometryReader { geometry in
            Chart(data, id: \.0) { item in
                LineMark(
                    x: .value("Time", item.0),
                    y: .value("Position", item.1)
                )
                .interpolationMethod(.catmullRom)
                .foregroundStyle(.white)
            }
            .chartYScale(domain: 0...1)
            .chartXScale(domain: sunriseTime...sunsetTime)
            .overlay {
                if currentTime >= sunriseTime && currentTime <= sunsetTime {
                    let progress = currentTime.timeIntervalSince(sunriseTime) / sunsetTime.timeIntervalSince(sunriseTime)
                    let x = geometry.size.width * progress
                    let y = geometry.size.height * (1 - CGFloat(calculateYValue(for: currentTime)))

                    Circle()
                        .fill(.white)
                        .frame(width: 8, height: 8)
                        .position(x: x, y: y)
                }
            }
        }
        .frame(height: 100)
    }
}

#Preview {
    SunPositionChart(sunriseTime: Date(),
                     sunsetTime: Date(),
                     currentTime: Date())
    .preferredColorScheme(.dark)
}
