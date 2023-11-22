import Foundation

struct Shop: Identifiable {
    let id: Int
    let name: String
    let description: String
}

extension Shop {
    
    public static let testData:[Shop] = [
        Shop(id: 1, name: "Shop 1", description: "Description 1"),
        Shop(id: 2, name: "Shop 2", description: "Description 2"),
        Shop(id: 3, name: "Shop 3", description: "Description 3"),
        Shop(id: 4, name: "Shop 4", description: "Description 4"),
        Shop(id: 5, name: "Shop 5", description: "Description 5"),
        Shop(id: 6, name: "Shop 6", description: "Description 6"),
        Shop(id: 7, name: "Shop 7", description: "Description 7"),
        Shop(id: 8, name: "Shop 8", description: "Description 8"),
        Shop(id: 9, name: "Shop 9", description: "Description 9"),
    ]
}
