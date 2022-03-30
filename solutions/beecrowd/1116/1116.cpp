#include <cstdint>
#include <cstdio>

int main() {
    float x, y;
    std::int16_t n;

    scanf("%d", &n);

    while (n--) {
        scanf("%f %f", &x, &y);
        if (y == 0.0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", x / y);
        }
    }

    return 0;
}
