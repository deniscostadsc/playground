#include <cmath>
#include <cstdio>

#define pi 3.14159

int main() {
    float r;

    while (scanf("%f", &r) != EOF) {
        printf("VOLUME = %.3f\n", 4.0 / 3.0 * pi * pow(r, 3));
    }
}
