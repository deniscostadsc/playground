#include <cmath>
#include <cstdint>
#include <cstdio>

int main() {
    float n, s = 0;
    std::int16_t c = 0;

    while (scanf("%f", &n) != EOF) {
        if (n > 0) {
            s += n;
            c++;
        }
    }

    printf("%d valores positivos\n", c);
    printf("%.1f\n", static_cast< float >(s / c));

    return 0;
}
