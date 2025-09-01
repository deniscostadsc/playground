#include <cstdio>
#include <iostream>

int main() {
    int16_t a, b;

    while (std::cin >> a) {
        std::cin >> b;
        std::cout << a % b << std::endl;
    }

    return 0;
}
