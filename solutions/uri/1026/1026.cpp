#include <iostream>

int main() {
    uint32_t a, b;

    while (std::cin >> a >> b) {
        std::cout << (a ^ b) << std::endl;
    }

    return 0;
}
