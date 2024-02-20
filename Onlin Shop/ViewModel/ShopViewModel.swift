import Foundation
import SwiftUI
import UIKit
import onlineshoplibrary

class ShopViewModel: ObservableObject {
    @Published var shops: [Shop] = []
    
    init() {
        let loadAllShopesUseCase = DIModelHelper().getLoadAllShoppesUseCase()
        loadAllShopesUseCase.onSuccess = { shops in
            self.shops = shops.map { shop in
                Shop(
                    id: Int(shop.id),
                    name: shop.name ?? "Test",
                    description: shop.description ?? "Test"
                )
            }
        }
        loadAllShopesUseCase.onFail = {
            
        }
        loadAllShopesUseCase.execute()

    }
}
