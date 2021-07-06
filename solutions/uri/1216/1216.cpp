#include <cstdint>
#include <cstdio>

int main() {
    char s[100];
    double d, t, n = 0.0;

    while (fgets(s, 100, stdin)) {
        scanf("%lf", &d);
        t += d;
        n += 1.0;
    }

    printf("%.1lf\n", t / n);

    return 0;
}
