import Foundation

class ProdcutDetailsViewModel: ObservableObject {
    private let productId: Int
    @Published var products: [Product] = []
    
    init(productId: Int) {
        self.productId = productId
    }
}
