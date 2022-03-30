#include <cstdint>
#include <iostream>

int main() {
    std::int16_t c, energy;

    std::cin >> c;

    for (std::int16_t i = 0; i < c; i++) {
        std::cin >> energy;

        if (energy > 8000) {
            std::cout << "Mais de 8000!";
        } else {
            std::cout << "Inseto!";
        }

        std::cout << std::endl;
    }

    return 0;
}
