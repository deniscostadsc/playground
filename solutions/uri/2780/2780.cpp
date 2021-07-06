#include <cstdint>
#include <iostream>

int main() {
    int16_t d;

    while (std::cin >> d) {
        if (d <= 800) {
            std::cout << "1";
        } else if (d <= 1400) {
            std::cout << "2";
        } else {
            std::cout << "3";
        }
        std::cout << std::endl;
    }

    return 0;
}
