#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t n, x, y, s;

    std::cin >> n;

    while (n--) {
        s = 0;
        std::cin >> x;
        std::cin >> y;

        if (x % 2 == 0) {
            x++;
        }

        for (std::int16_t i = 0; i < y; i++, x += 2) {
            s += x;
        }

        std::cout << s << std::endl;
    }

    return 0;
}
