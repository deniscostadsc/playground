#include <cstdint>
#include <iostream>

int main() {
    for (std::int16_t i = 0; i < 39; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    for (std::int16_t i = 0; i < 5; i++) {
        std::cout << "|";
        for (std::int16_t i = 0; i < 37; i++) {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;
    }
    for (std::int16_t j = 0; j < 39; j++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    return 0;
}
