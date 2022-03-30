#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t a, b, c, g, m, s, x;

    scanf("%d %d %d", &a, &b, &c);

    g = a;
    m = b;
    s = c;

    if (g < m) {
        x = g;
        g = m;
        m = x;
    }
    if (m < s) {
        x = m;
        m = s;
        s = x;
    }
    if (g < m) {
        x = g;
        g = m;
        m = x;
    }

    printf("%d\n", s);
    printf("%d\n", m);
    printf("%d\n\n", g);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
