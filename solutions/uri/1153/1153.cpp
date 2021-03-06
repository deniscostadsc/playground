#include <cstdint>
#include <cstdio>

int16_t fat(int16_t n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fat(n - 1);
}

int main() {
    int16_t n;

    scanf("%d", &n);
    printf("%d\n", fat(n));

    return 0;
}
