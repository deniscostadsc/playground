#include <cstdint>
#include <iostream>

int main() {
    std::uint64_t n, l;

    while (std::cin >> n >> l) {
        std::cout << n * l << std::endl;
    }

    return 0;
}
