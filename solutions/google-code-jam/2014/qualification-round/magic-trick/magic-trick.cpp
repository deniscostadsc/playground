#include <cstdint>
#include <cstdio>

int main() {
    int16_t cases, nrow, t, c, card, n = 0;
    int16_t first_row[4], second_row[4];

    scanf("%d", &cases);

    while (++n <= cases) {
        scanf("%d", &nrow);
        for (int16_t i = 1; i <= 4; ++i) {
            for (int16_t j = 0; j <= 3; ++j) {
                scanf("%d", &t);
                if (nrow == i) {
                    first_row[j] = t;
                }
            }
        }

        scanf("%d", &nrow);
        for (int16_t i = 1; i <= 4; ++i) {
            for (int16_t j = 0; j <= 3; ++j) {
                scanf("%d", &t);
                if (nrow == i) {
                    second_row[j] = t;
                }
            }
        }

        c = 0;
        for (int16_t i = 0; i <= 3; ++i) {
            for (int16_t j = 0; j <= 3; ++j) {
                if (first_row[i] == second_row[j]) {
                    card = second_row[j];
                    c++;
                }
            }
        }

        if (c == 1) {
            printf("Case #%d: %d\n", n, card);
        } else if (c > 1) {
            printf("Case #%d: Bad magician!\n", n);
        } else {
            printf("Case #%d: Volunteer cheated!\n", n);
        }
    }
    return 0;
}
