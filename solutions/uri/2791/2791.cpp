#include <cstdint>
#include <iostream>

int main() {
    int16_t a, b, c, d;

    while (std::cin >> a >> b >> c >> d) {
        if (a == 1) {
            std::cout << 1 << std::endl;
        } else if (b == 1) {
            std::cout << 2 << std::endl;
        } else if (c == 1) {
            std::cout << 3 << std::endl;
        } else {
            std::cout << 4 << std::endl;
        }
    }

    return 0;
}
