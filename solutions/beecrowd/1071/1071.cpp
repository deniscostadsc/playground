#include <cstdint>
#include <iostream>

int main() {
    std::int64_t x, y, s;

    while (std::cin >> x && std::cin >> y) {
        if (x > y) {
            int64_t temp = x;
            x = y;
            y = temp;
        }

        x++;
        if (x % 2 == 0) {
            x++;
        }

        s = 0;
        for (std::int64_t i = x; i < y; i += 2) {
            s += i;
        }

        std::cout << s << std::endl;
    }

    return 0;
}
