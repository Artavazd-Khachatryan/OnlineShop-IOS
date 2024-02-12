import Foundation
import SwiftUI
import UIKit

class ProductViewModel: ObservableObject {
    let shopId: Int
    @Published var products: [Product] = []
    
    private let productRepository = ProductRepository()
    
    init(shopId: Int) {
        self.shopId = shopId
        loadProducts(forShopId: shopId)
    }
    
    private func loadProducts(forShopId: Int) {
        products = productRepository.filter(forShopId: shopId)
    }
}
