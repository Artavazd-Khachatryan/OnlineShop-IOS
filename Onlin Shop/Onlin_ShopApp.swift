//
//  Onlin_ShopApp.swift
//  Onlin Shop
//
//  Created by Artavazd Khachatryan on 22.11.23.
//

import SwiftUI
import onlineshoplibrary

@main
struct Onlin_ShopApp: App {
    
    init() {
        KoinModulesKt.doInitKoin()
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
