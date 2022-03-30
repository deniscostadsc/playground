#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t x, y;

    while (scanf("%d %d", &x, &y) != EOF && x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            printf("primeiro\n");
        } else if (x < 0 && y < 0) {
            printf("terceiro\n");
        } else if (x < 0) {
            printf("segundo\n");
        } else {
            printf("quarto\n");
        }
    }

    return 0;
}
