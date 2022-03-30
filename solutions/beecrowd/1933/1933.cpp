#include <cstdint>
#include <iostream>

int main() {
    std::int16_t a, b;

    while (std::cin >> a >> b) {
        std::cout << (a > b ? a : b) << std::endl;
    }
    return 0;
}
