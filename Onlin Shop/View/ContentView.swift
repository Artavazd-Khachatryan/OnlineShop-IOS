//
//  ContentView.swift
//  Onlin Shop
//
//  Created by Artavazd Khachatryan on 22.11.23.
//

import SwiftUI

struct ContentView: View {
    @StateObject private var shopViewModel = ShopViewModel()
    
    var body: some View {
        NavigationView {
            List(shopViewModel.shops) { shop in
                NavigationLink(destination: ProductListView(shopId: shop.id)) {
                    Text(shop.name)
                }
            }
            .navigationTitle("Shops")
        }
    }
}

#Preview {
    ContentView()
}
