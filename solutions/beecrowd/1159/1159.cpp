#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t x, s;

    while (scanf("%d", &x) && x != 0) {
        s = 0;

        if (x % 2 != 0) {
            x++;
        }

        for (std::int16_t i = 0; i <= 4; i++, x += 2) {
            s += x;
        }

        std::cout << s << std::endl;
    }
    return 0;
}
