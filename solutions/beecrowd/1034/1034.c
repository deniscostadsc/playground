#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int32_t blocks[26];

int32_t minimum_blocks(int32_t m, int32_t n) {
    int32_t i, j, result[m + 1];

    result[0] = 0;

    for (j = 0; j < n; j++) {
        for (i = blocks[j]; i <= m; i++) {
            if (j == 0) {
                result[i] = INT_MAX;
            }
            if (blocks[j] <= i) {
                result[i] = result[i];
                if (result[i - blocks[j]] + 1 < result[i]) {
                    result[i] = result[i - blocks[j]] + 1;
                }
            }
        }
    }

    return result[m];
}

int main() {
    int32_t i, t, n, m;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &m);

        for (i = 0; i < n; i++) {
            scanf("%d", &blocks[i]);
        }

        printf("%d\n", minimum_blocks(m, n));
    }

    return 0;
}
