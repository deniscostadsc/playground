#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t degree;

    while (std::cin >> degree) {
        if (degree == 360 || degree < 90) {
            std::cout << "Bom Dia!!\n";
        } else if (degree < 180) {
            std::cout << "Boa Tarde!!\n";
        } else if (degree < 270) {
            std::cout << "Boa Noite!!\n";
        } else {
            std::cout << "De Madrugada!!\n";
        }
    }

    return 0;
}
