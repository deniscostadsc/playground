#include <cstdint>
#include <iostream>

int main() {
    int16_t k;

    while (std::cin >> k) {
        std::cout << "Top ";

        if (k == 1) {
            std::cout << 1;
        } else if (k <= 3) {
            std::cout << 3;
        } else if (k <= 5) {
            std::cout << 5;
        } else if (k <= 10) {
            std::cout << 10;
        } else if (k <= 25) {
            std::cout << 25;
        } else if (k <= 50) {
            std::cout << 50;
        } else {
            std::cout << 100;
        }
        std::cout << std::endl;
    }

    return 0;
}
