#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n;

    while (std::cin >> n) {
        std::cout << (n + 1) * (n + 2) / 2 << std::endl;
    }

    return 0;
}
