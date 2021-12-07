#include <cstdint>
#include <cstdio>

int main() {
    char o;
    int16_t i, j, x = 12;
    float s, n;

    scanf("%c", &o);

    for (i = 0; i <= 11; i++) {
        x--;
        for (j = 0; j <= 11; j++) {
            scanf("%f", &n);
            if (j < x) {
                s += n;
            }
        }
    }

    if (o == 'S') {
        printf("%.1f\n", s);
    } else {
        printf("%.1f\n", s / 66);
    }

    return 0;
}
