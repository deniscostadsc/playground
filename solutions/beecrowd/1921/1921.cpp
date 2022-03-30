#include <cstdint>
#include <iostream>

int main() {
    std::uint64_t n;

    while (std::cin >> n) {
        std::cout << (n * (n - 1) / 2) - n << std::endl;
    }

    return 0;
}
