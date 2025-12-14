#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, t, i, index, lowest;

    while (std::cin >> n) {
        lowest = 21;
        index = -1;

        for (i = 1; i <= n; i++) {
            std::cin >> t;

            if (t < lowest) {
                lowest = t;
                index = i;
            }
        }

        std::cout << index << std::endl;
    }

    return 0;
}
