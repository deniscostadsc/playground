#include <cstdint>
#include <cstdio>

int main() {
    char o;
    std::int16_t i, j, x = 11;
    float s = 0, n;

    scanf("%c", &o);

    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%f", &n);
            if (x < j) {
                s += n;
            }
        }
        x--;
    }

    if (o == 'S') {
        printf("%.1f\n", s);
    } else {
        printf("%.1f\n", s / 66);
    }

    return 0;
}
