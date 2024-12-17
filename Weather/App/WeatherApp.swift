//
//  WeatherApp.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import ComposableArchitecture
import SwiftUI

@main
struct WeatherApp: App {
    var body: some Scene {
        WindowGroup {
            WelcomeView(
                store: Store(initialState: Welcome.State()) {
                    Welcome()
                }
            )
            .preferredColorScheme(.dark)
        }
    }
}
