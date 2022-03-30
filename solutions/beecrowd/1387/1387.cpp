#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t x, y;

    while (scanf("%d %d", &x, &y) && x != 0 && y != 0) {
        printf("%d\n", x + y);
    }

    return 0;
}
