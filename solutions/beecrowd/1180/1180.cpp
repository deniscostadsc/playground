#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    int16_t c, n, m, im = 0, i = 0;

    std::cin >> c;
    std::cin >> n;

    m = n;

    while (c--) {
        i++;
        std::cin >> n;
        if (n < m) {
            im = i;
            m = n;
        }
    }

    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", im);

    return 0;
}
