#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t n;
    while (scanf("%d", &n) != EOF) {
        int16_t black_squares = n * n / 2;
        int16_t white_squares = black_squares;

        if (n % 2 != 0) {
            white_squares++;
        }

        printf(
            "%d casas brancas e %d casas pretas\n",
            white_squares,
            black_squares
        );
    }

    return 0;
}
