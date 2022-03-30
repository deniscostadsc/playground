#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, h, previous_h, direction;
    bool has_pattern;

    while (std::cin >> n) {
        std::cin >> previous_h;
        std::cin >> h;

        has_pattern = true;

        if (previous_h > h) {
            direction = -1;
        } else if (previous_h < h) {
            direction = 1;
        } else {
            has_pattern = false;
        }

        n -= 2;
        while (n--) {
            previous_h = h;
            std::cin >> h;

            if (previous_h > h && direction == 1) {
                direction = -1;
            } else if (previous_h < h && direction == -1) {
                direction = 1;
            } else {
                has_pattern = false;
            }
        }

        std::cout << (has_pattern ? 1 : 0) << std::endl;
    }

    return 0;
}
