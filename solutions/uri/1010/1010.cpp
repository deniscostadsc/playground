#include <cmath>
#include <cstdio>

int main() {
    int a, b;
    float c, s = 0.0;
    while (scanf("%d %d %f", &a, &b, &c) != EOF) {
        s += c * b;
    }
    printf("VALOR A PAGAR: R$ %.2f\n", s);
}
