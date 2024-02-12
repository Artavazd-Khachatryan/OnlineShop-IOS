import Foundation

class ProductRepository {

    let testData: [Product] = [
            Product(id: 1, shopId: 1, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 1, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 1, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 1, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 1, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 1, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 1, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 2, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 2, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 2, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 2, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 2, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 2, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 2, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 3, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 3, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 3, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 3, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 3, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 3, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 3, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 4, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 4, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 4, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 4, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 4, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 4, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 4, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 5, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 5, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 5, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 5, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 5, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 5, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 5, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 6, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 6, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 6, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 6, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 6, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 6, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 6, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 7, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 7, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 7, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 7, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 7, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 7, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 7, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 8, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 8, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 8, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 8, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 8, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 8, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 8, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
            
            Product(id: 1, shopId: 9, title: "Product 1", description: "desription", price: 1.0, category: "Category"),
            Product(id: 2, shopId: 9, title: "Product 2", description: "desription", price: 1.0, category: "Category"),
            Product(id: 3, shopId: 9, title: "Product 3", description: "desription", price: 1.0, category: "Category"),
            Product(id: 4, shopId: 9, title: "Product 4", description: "desription", price: 1.0, category: "Category"),
            Product(id: 5, shopId: 9, title: "Product 5", description: "desription", price: 1.0, category: "Category"),
            Product(id: 6, shopId: 9, title: "Product 6", description: "desription", price: 1.0, category: "Category"),
            Product(id: 7, shopId: 9, title: "Product 7", description: "desription", price: 1.0, category: "Category"),
    ]

    func filter(forShopId shopId: Int) -> [Product] {
        return testData.filter { $0.shopId == shopId }
    }

    func find(productId: Int) -> Product? {
        return testData.first { $0.id == productId }
    }
}

