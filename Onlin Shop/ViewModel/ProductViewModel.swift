import Foundation
import SwiftUI
import UIKit

class ProductViewModel: ObservableObject {
    let shopId: Int
    @Published var products: [Product] = []
    
    init(shopId: Int) {
        self.shopId = shopId
        loadProducts(forShopId: shopId)
    }
    func loadProducts(forShopId: Int) {
        products = Product.testData.filter { $0.shopId == forShopId }
    }
}
