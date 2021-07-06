#include <cstdint>
#include <iostream>

int main() {
    int16_t n, t, i, index, lowest = 21;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> t;

        if (t < lowest) {
            lowest = t;
            index = i;
        }
    }

    std::cout << index << std::endl;

    return 0;
}
