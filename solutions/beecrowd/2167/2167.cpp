#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, r, previous_r, position;
    bool decreased;

    while (std::cin >> n) {
        decreased = false;

        std::cin >> previous_r;

        for (std::int16_t i = 2; i <= n; i++) {
            std::cin >> r;

            if (!decreased && r < previous_r) {
                position = i;
                decreased = true;
            }

            previous_r = r;
        }

        std::cout << (decreased ? position : 0) << std::endl;
    }

    return 0;
}
