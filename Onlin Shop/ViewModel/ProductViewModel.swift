import Foundation
import SwiftUI
import UIKit

class ProductViewModel: ObservableObject {
    @Published var products: [Product] = []
    
    func loadProducts(forShopId: Int) {
        products = Product.testData.filter { $0.shopId == forShopId }
    }
}
