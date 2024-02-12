import Foundation
import SwiftUI

struct ProductListView: View {
    @StateObject private var productViewModel: ProductViewModel
    
    init(shopId: Int) {
           _productViewModel = StateObject(wrappedValue: ProductViewModel(shopId: shopId))
       }
    
    var body: some View {
        List(productViewModel.products) { product in
            NavigationLink(destination: ProductDetailsView(productId: product.id)) {
                Text(product.title)
            }
        }
        .navigationTitle("\(productViewModel.shopId) Products")
    }
}

#Preview {
    ProductListView(shopId: 1)
}
