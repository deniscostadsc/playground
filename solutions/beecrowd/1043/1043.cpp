#include <cstdio>
#include <iostream>

int main() {
    float a, b, c;

    while (std::cin >> a >> b >> c) {
        if (a < b + c && b < a + c && c < a + b) {
            printf("Perimetro = %.1f\n", a + b + c);
        } else {
            printf("Area = %.1f\n", c * (a + b) / 2);
        }
    }

    return 0;
}
