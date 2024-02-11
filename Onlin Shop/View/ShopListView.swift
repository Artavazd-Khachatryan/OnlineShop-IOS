import Foundation
import SwiftUI

struct ShopListView: View {
    @StateObject private var shopViewModel = ShopViewModel()
    
    var body: some View {
        List(shopViewModel.shops) { shop in
            NavigationLink(destination: ProductListView(shopId: shop.id)) {
                Text(shop.name)
            }
            .navigationTitle("Shops")
        }
    }
}
