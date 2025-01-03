#include <cmath>
#include <cstdint>
#include <cstdio>

int main() {
    double n;
    std::int32_t d[]
        = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    std::int32_t total_value, t = 0, c, i;

    while (scanf("%lf", &n) != EOF) {
        total_value = static_cast< std::int32_t >(n * 100);
        printf("NOTAS:\n");

        t = 0;

        for (i = 0; i < 12; i++) {
            c = 0;

            while (total_value >= d[t]) {
                total_value -= d[t];
                c++;
            }

            if (d[t] == 100) {
                printf("MOEDAS:\n");
            }

            if (d[t] >= 200) {
                printf("%d nota(s) de R$ %d.00\n", c, d[t] / 100);
            } else {
                printf(
                    "%d moeda(s) de R$ %.2f\n",
                    c,
                    static_cast< float >(d[t]) / 100.0);
            }

            t++;
        }
    }

    return 0;
}
