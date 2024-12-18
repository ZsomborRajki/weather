//
//  SecondaryButtonStyle.swift
//  Weather
//
//  Created by Zsombor Rajki on 2024. 12. 17..
//

import SwiftUI

struct SecondaryButtonStyle: ButtonStyle {
    func makeBody(configuration: Configuration) -> some View {
        configuration.label
            .frame(maxWidth: .infinity)
            .padding(.vertical, 14)
            .background(
                RoundedRectangle(cornerRadius: 32)
                    .stroke(Color(.pink))
                    .fill(configuration.isPressed ? Color(.pressedDark) : Color.white.opacity(0.01))
            )
            .foregroundColor(Color(.pink))
            .font(.system(size: 16, weight: .medium))
    }
}

extension ButtonStyle where Self == SecondaryButtonStyle {
    static var secondary: Self {
        SecondaryButtonStyle()
    }
}
