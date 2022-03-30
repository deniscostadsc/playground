#include <cstdint>
#include <iostream>

int main() {
    std::uint64_t x, m;

    while (std::cin >> x >> m && x && m) {
        std::cout << x * m << std::endl;
    }

    return 0;
}
