#include <cstdio>

int main() {
    float a, b;

    while (scanf("%f %f", &a, &b) != EOF) {
        printf("%.3f km/l\n", a / b);
    }
}
