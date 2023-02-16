#include <cstdint>
#include <iostream>

std::int32_t fat(std::int16_t n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fat(n - 1);
}

int main() {
    std::int16_t n;

    while (std::cin >> n) {
        std::cout << fat(n) << std::endl;
    }

    return 0;
}
