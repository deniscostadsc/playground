#include <cstdint>
#include <iostream>

int main() {
    std::int32_t a, b;

    while (std::cin >> a >> b && a && b) {
        if (a < b) {
            std::cout << a - (b - a) << std::endl;
        } else {
            std::cout << b - (a - b) << std::endl;
        }
    }

    return 0;
}
