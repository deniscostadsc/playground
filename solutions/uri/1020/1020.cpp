#include <cstdint>
#include <cstdio>

int main() {
    int16_t t, a, m, d;

    while (scanf("%d", &t) != EOF) {
        a = 0, m = 0, d = 0;

        if (t >= 365) {
            a = t / 365;
            t %= 365;
        }

        if (t >= 30) {
            m = t / 30;
            t %= 30;
        }

        d = t;

        printf("%d ano(s)\n", a);
        printf("%d mes(es)\n", m);
        printf("%d dia(s)\n", d);
    }

    return 0;
}
