#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>

int main() {
    std::int16_t n[2001], x, i, j, c = 1;

    memset(n, 0, sizeof(n));

    std::cin >> j;

    while (j--) {
        std::cin >> x;
        n[x]++;
        if (x > c) {
            c = x;
        }
    }

    for (i = 1; i <= c; i++) {
        if (n[i] != 0) {
            std::cout << i << " aparece " << n[i] << " vez(es)" << std::endl;
        }
    }
}
