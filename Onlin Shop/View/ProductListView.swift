import Foundation
import SwiftUI

struct ProductListView: View {
    let shopId: Int
    @StateObject private var productViewModel = ProductViewModel()
    
    var body: some View {
        List(productViewModel.products) { product in
            Text(product.title)
        }
        .navigationTitle("Products")
        .onAppear {
            productViewModel.loadProducts(forShopId: shopId)
        }
    }
}

#Preview {
    ProductListView(shopId: 1)
}
