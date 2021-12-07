#include <cstdint>
#include <iostream>

int main() {
    int16_t a_quantity;

    while (std::cin >> a_quantity) {
        std::cout << "Feliz nat";
        for (int16_t i = 0; i < a_quantity; i++) {
            std::cout << "a";
        }
        std::cout << "l!" << std::endl;
    }

    return 0;
}
