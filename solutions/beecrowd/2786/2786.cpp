#include <cstdint>
#include <iostream>

int main() {
    std::int16_t l, c;

    while (std::cin >> l >> c) {
        std::cout << (l * c) + ((l - 1) * (c - 1)) << std::endl
                  << (((l - 1) * 2) + ((c - 1) * 2)) << std::endl;
    }

    return 0;
}
