#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t r, c;
    float n, s;

    do {
        c = 0;
        s = 0.0;

        while (c < 2) {
            std::cin >> n;
            if (n >= 0.0 && n <= 10.0) {
                s += n;
                c++;
            } else {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2f\n", s / 2.0);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            std::cin >> r;
        } while (r != 1 && r != 2);
    } while (r != 2);

    return 0;
}
