#include <cstdio>
#include <iostream>

int main() {
    std::int16_t n, i, j = 0;
    std::cin >> n;
    for (i = 0; i < 1000; i++) {
        if (j >= n) {
            j = 0;
        }
        printf("N[%d] = %d\n", i, j++);
    }
    return 0;
}
