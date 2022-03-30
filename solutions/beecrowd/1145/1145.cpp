#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t x, y, i = 1, j;

    scanf("%d %d", &x, &y);

    while (i <= y) {
        for (j = 0; j < x; j++) {
            if (i > y) {
                break;
            }
            if (j == 0) {
                printf("%d", i++);
            } else {
                printf(" %d", i++);
            }
        }
        printf("\n");
    }

    return 0;
}
