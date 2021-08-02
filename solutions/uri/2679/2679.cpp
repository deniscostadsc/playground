#include <iostream>

int main () {
    int32_t x;

    while (std::cin >> x) {
        if (x % 2 == 0) {
            std::cout << x + 2 << std::endl;
        } else {
            std::cout << x + 1 << std::endl;
        }
    }

    return 0;
}
