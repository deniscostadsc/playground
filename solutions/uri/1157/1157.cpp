#include <cstdio>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            printf("%d\n", i);
    }
    printf("%d\n", n);
    return 0;
}
