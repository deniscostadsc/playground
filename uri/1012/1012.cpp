#include <cstdio>

#define pi 3.14159

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("TRIANGULO: %.3f\n", a * c / 2);
    printf("CIRCULO: %.3f\n", pi * (c * c));
    printf("TRAPEZIO: %.3f\n", c * ((a + b) / 2));
    printf("QUADRADO: %.3f\n", b * b);
    printf("RETANGULO: %.3f\n", a * b);
}
