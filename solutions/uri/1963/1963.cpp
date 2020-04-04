#include <iomanip>
#include <iostream>

int main() {
    double price1, price2;

    while (std::cin >> price1 >> price2) {
        std::cout << std::fixed << std::setprecision(2)
                  << 100 * (price2 - price1) / price1 << "%" << std::endl;
    }
    return 0;
}
