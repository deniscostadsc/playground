#include <cstdio>
#include <iostream>

int main() {
    int16_t b, g;

    while (std::cin >> b) {
        std::cin >> g;
        if (g / 2 < b) {
            std::cout << "Amelia tem todas bolinhas!" << std::endl;
        } else {
            std::cout << "Faltam " << (g / 2) - b << " bolinha(s)" << std::endl;
        }
    }

    return 0;
}
