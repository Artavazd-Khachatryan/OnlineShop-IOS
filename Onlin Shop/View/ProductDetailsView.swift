import Foundation
import SwiftUI

struct ProductDetailsView: View {
    
    private let productId: Int
    private let product: Product
    
    private let productRepository = ProductRepository()
    
    init(productId: Int) {
        self.productId = productId
        self.product = productRepository.find(productId: productId)!
    }
    
    var body: some View {
        VStack(alignment: .leading) {
            Text(product.title)
                .font(.title)
                .padding(.bottom)

            Text("Description:")
                .font(.headline)
                .padding(.bottom, 1)
            Text(product.description)
                .padding(.bottom)

            Text("Price: $\(product.price)")
                .font(.headline)
                .padding(.bottom)

            Text("Category: \(product.category)")
                .font(.headline)
                .padding(.bottom)

            Spacer()
        }
        .padding()
        .navigationTitle("Product Detail")
    }
}
