#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t n, i;

    for (n = 0; n <= 9; n++) {
        scanf("%d", &i);

        if (i > 0) {
            printf("X[%d] = %d\n", n, i);
        } else {
            printf("X[%d] = 1\n", n);
        }
    }

    return 0;
}
