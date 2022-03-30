#include <cstdint>
#include <cstdio>
#include <cstring>

std::int64_t rfat[21];

std::int64_t fat(std::int64_t n) {
    if (rfat[n] != 0) {
        return rfat[n];
    }
    if (n <= 1) {
        rfat[n] = 1;
    } else {
        rfat[n] = n * fat(n - 1);
    }
    return rfat[n];
}

int main() {
    std::int64_t x, y;
    memset(rfat, 0, sizeof(rfat));
    while (scanf("%lld %lld", &x, &y) != EOF) {
        printf("%lld\n", fat(x) + fat(y));
    }
    return 0;
}
