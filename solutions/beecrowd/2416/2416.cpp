#include <cstdint>
#include <iostream>

int main() {
    std::int32_t c, n;

    while (std::cin >> c >> n) {
        std::cout << c % n << std::endl;
    }

    return 0;
}
