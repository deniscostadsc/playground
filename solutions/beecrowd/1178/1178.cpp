#include <cstdint>
#include <cstdio>

int main() {
    double n;
    std::int16_t i;

    scanf("%lf", &n);

    for (i = 0; i <= 99; i++) {
        printf("N[%d] = %.4f\n", i, n);
        n /= 2;
    }

    return 0;
}
