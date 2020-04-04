#include <cstdio>

int main() {
    float a, b, c, x;
    scanf("%f %f %f", &a, &b, &c);

    if (a < b) {
        x = a;
        a = b;
        b = x;
    }
    if (b < c) {
        x = b;
        b = c;
        c = x;
    }
    if (a < b) {
        x = a;
        a = b;
        b = x;
    }

    if (a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
    else if (a * a == b * b + c * c)
        printf("TRIANGULO RETANGULO\n");
    else if (a * a > b * b + c * c)
        printf("TRIANGULO OBTUSANGULO\n");
    else if (a * a < b * b + c * c)
        printf("TRIANGULO ACUTANGULO\n");

    if (a == b && b == c)
        printf("TRIANGULO EQUILATERO\n");
    else if (a == b || b == c)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
