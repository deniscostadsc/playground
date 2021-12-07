#include <cstdint>
#include <cstdio>

int main() {
    int64_t a, b;

    while (scanf("%lld %lld", &a, &b) != EOF) {
        if (a > b) {
            printf("%lld\n", a - b);
        } else {
            printf("%lld\n", b - a);
        }
    }

    return 0;
}
