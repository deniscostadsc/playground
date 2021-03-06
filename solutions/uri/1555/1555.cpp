#include <cstdint>
#include <iostream>

int16_t rafael(int16_t x, int16_t y) {
    return ((3 * x) * (3 * x)) + (y * y);
}

int16_t beto(int16_t x, int16_t y) {
    return 2 * (x * x) + ((5 * y) * (5 * y));
}

int16_t carlos(int16_t x, int16_t y) {
    return -100 * x + (y * y * y);
}

int main() {
    int16_t n, x, y;

    std::cin >> n;

    while (n--) {
        std::cin >> x >> y;
        if (rafael(x, y) > beto(x, y) && rafael(x, y) > carlos(x, y)) {
            std::cout << "Rafael ganhou" << std::endl;
        } else if (beto(x, y) > carlos(x, y)) {
            std::cout << "Beto ganhou" << std::endl;
        } else {
            std::cout << "Carlos ganhou" << std::endl;
        }
    }

    return 0;
}
