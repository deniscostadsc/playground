#include <cstdio>

int main() {
    int n, r1, r2;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }

    return 0;
}
