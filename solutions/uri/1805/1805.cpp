#include <cstdint>
#include <iostream>

int main() {
    uint64_t first, last;

    while (std::cin >> first >> last) {
        std::cout << (last - first + 1) * (first + last) / 2 << std::endl;
    }

    return 0;
}
