#include <cstdint>
#include <iostream>

int main() {
    int16_t c1, c2, p1, p2;

    while (std::cin >> c1 >> p1 >> c2 >> p2) {
        if (c1 * p1 == c2 * p2) {
            std::cout << "0";
        } else if (c1 * p1 < c2 * p2) {
            std::cout << "1";
        } else {
            std::cout << "-1";
        }
        std::cout << std::endl;
    }

    return 0;
}
