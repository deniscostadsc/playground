#include <cstdint>
#include <iostream>

int main() {
    int16_t a, b, c;

    while (std::cin >> a >> b >> c) {
        if (a == b && b == c) {
            std::cout << "*" << std::endl;
        } else if (b == c) {
            std::cout << "A" << std::endl;
        } else if (a == c) {
            std::cout << "B" << std::endl;
        } else {
            std::cout << "C" << std::endl;
        }
    }

    return 0;
}
