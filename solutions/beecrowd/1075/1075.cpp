#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t n;

    std::cin >> n;

    for (std::int16_t i = 1; i <= 10000; i++) {
        if (i % n == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}
