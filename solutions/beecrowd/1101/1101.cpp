#include <cstdint>
#include <cstdio>

int main() {
    int16_t i, j, x, z, s;

    while (scanf("%d %d", &i, &j) && i > 0 && j > 0) {
        s = 0;
        if (j < i) {
            x = i;
            i = j;
            j = x;
        }
        for (z = i; z <= j; z++) {
            printf("%d ", z);
            s += z;
        }
        printf("Sum=%d\n", s);
    }

    return 0;
}
