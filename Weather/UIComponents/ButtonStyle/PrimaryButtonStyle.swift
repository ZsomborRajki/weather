//
//  PrimaryButtonStyle.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import SwiftUI

struct PrimaryButtonStyle: ButtonStyle {
    @Environment(\.isEnabled) private var isEnabled

    func makeBody(configuration: Configuration) -> some View {
        configuration.label
            .frame(maxWidth: .infinity)
            .padding(.vertical, 14)
            .background(
                RoundedRectangle(cornerRadius: 32)
                    .fill(isEnabled ? Color(.pink) : Color(.disabledDark))
            )
            .foregroundColor(isEnabled ? Color(.purple) : Color(.disabledLight))
            .font(.system(size: 16, weight: .medium))
    }
}

extension ButtonStyle where Self == PrimaryButtonStyle {
    static var primary: Self {
        PrimaryButtonStyle()
    }
}
