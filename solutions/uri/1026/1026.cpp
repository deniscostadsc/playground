#include <iostream>

int main() {
    uint16_t a, b;

    while (std::cin >> a >> b) {
        std::cout << (a ^ b) << std::endl;
    }

    return 0;
}
