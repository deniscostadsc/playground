#include <cstdio>
#include <iostream>

int main() {
    int n, c;
    int a, b;
    float ac, bc;

    std::cin >> n;
    while (n--) {
        c = 0;
        scanf("%d %d %f %f", &a, &b, &ac, &bc);
        while (a <= b) {
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100) {
            printf("%d anos.\n", c);
        }
    }
    return 0;
}
