import Foundation
import SwiftUI
import UIKit

class ShopViewModel: ObservableObject {
    @Published var shops: [Shop] = []
    
    init() {
        shops = Shop.testData
    }
}
