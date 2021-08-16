#include <iostream>

int main() {
    int16_t x, y, diff;

    while (std::cin >> x >> y) {
        diff = y - x;
        if (x < diff) {
            std::cout << 2 << std::endl;
        } else {
            if ((x / diff * diff) < x) {
                std::cout << (x / diff) + 2 << std::endl;
            } else {
                std::cout << (x / diff) + 1 << std::endl;
            }
        }
    }

    return 0;
}
