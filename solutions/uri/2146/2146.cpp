#include <cstdint>
#include <iostream>

int main() {
    int16_t n;

    while (std::cin >> n) {
        std::cout << (n - 1) << std::endl;
    }

    return 0;
}
