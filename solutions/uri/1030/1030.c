#include <stdint.h>
#include <stdio.h>

int32_t josephus(int32_t n, int32_t k) {
    if (n == 1) {
        return 1;
    }

    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    int32_t n, k, q, c = 0;

    scanf("%d", &q);

    while (++c <= q) {
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", c, josephus(n, k));
    }

    return 0;
}
