import ComposableArchitecture
import SwiftUI
import Foundation
import Shared

@main
struct SearchApp: App {
  var body: some Scene {
    WindowGroup {
        Color.red
            .onAppear {
                let platformFileStore = PlatformFileStore()
                let platformSettingStore = PlatformSettingStore()
                let client = WeatherClient(appId: "1I5rQGUBnsiEPfCHJuu5AgRT7QbVeB1t",
                                           platformFileStore: platformFileStore,
                                           platformSettingStore: platformSettingStore)
                Task {
                    let result = try await client.requestRealtimeWeather(latitude: 47.442208,
                                                                         longitude: 19.144878,
                                                                         units: MetricUnit.metric,
                                                                         cachePolicy: CachePolicy.companion.DEFAULT)
                    // decode the result
                    let decoder = JSONDecoder()
                    
                    print(result.description)
                }
            }
    }
  }
}
