#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t n = -1;
    float i;

    while (++n <= 99) {
        std::cin >> i;

        if (i <= 10) {
            std::cout << "A[" << n << "] = " << i << std::endl;
        }
    }

    return 0;
}
