#include <cstdint>
#include <iostream>

int main() {
    int16_t t;

    while (std::cin >> t) {
        std::cout << t * 4 << std::endl;
    }

    return 0;
}
