#include <iostream>

int main() {
    std::uint32_t a, b;

    while (std::cin >> a >> b) {
        std::cout << (a ^ b) << std::endl;
    }

    return 0;
}
