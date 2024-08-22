#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t i, j, x, n, l, swap;
    int16_t swapped;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &l);
        swap = 0;

        int16_t train[l];

        for (i = 0; i < l; i++) {
            scanf("%d", &train[i]);
        }

        for (i = l - 1; i >= 0; i--) {
            swapped = 0;

            for (j = 0; j < i; j++) {
                if (train[j] > train[j + 1]) {
                    x = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = x;
                    swap++;
                    swapped = 1;
                }
            }

            if (!swapped) {
                break;
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swap);
    }
    return 0;
}
