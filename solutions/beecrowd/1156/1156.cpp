#include <cstdint>
#include <cstdio>

int main() {
    double s = 1.0, x = 2.0;
    std::int16_t i;

    for (i = 3; i <= 39; i += 2) {
        s += static_cast< double >(i / x);
        x *= 2;
    }

    printf("%.2lf\n", s);

    return 0;
}
