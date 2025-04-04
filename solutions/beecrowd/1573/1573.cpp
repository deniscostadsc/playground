#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    int16_t a, b, c;

    while (std::cin >> a >> b >> c) {
        if (!a) {
            break;
        }

        std::cout << static_cast< int16_t >(std::pow(a * b * c, 1.0 / 3.0))
                  << std::endl;
    }

    return 0;
}
