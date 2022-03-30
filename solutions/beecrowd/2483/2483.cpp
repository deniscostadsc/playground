#include <cstdint>
#include <iostream>

int main() {
    std::int16_t a_quantity;

    while (std::cin >> a_quantity) {
        std::cout << "Feliz nat";
        for (std::int16_t i = 0; i < a_quantity; i++) {
            std::cout << "a";
        }
        std::cout << "l!" << std::endl;
    }

    return 0;
}
