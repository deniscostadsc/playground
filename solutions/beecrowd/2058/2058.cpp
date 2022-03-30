#include <cstdint>
#include <iostream>

int main() {
    std::int32_t n;

    while (std::cin >> n) {
        std::cout << n - 2 << std::endl;
    }

    return 0;
}
