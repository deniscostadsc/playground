#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t n, i;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}
