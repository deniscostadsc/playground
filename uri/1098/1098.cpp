#include <cstdio>
#include <cmath>

int main() {
    int i;

    for (i = 0; i <= 20; i += 2) {
        if (i == 0 || i == 10 || i == 20) {
            printf("I=%.0f J=%.0f\n", (float)i / 10, (float)i / 10 + 1);
            printf("I=%.0f J=%.0f\n", (float)i / 10, (float)i / 10 + 2);
            printf("I=%.0f J=%.0f\n", (float)i / 10, (float)i / 10 + 3);
        } else {
            printf("I=%.1f J=%.1f\n", (float)i / 10, (float)i / 10 + 1);
            printf("I=%.1f J=%.1f\n", (float)i / 10, (float)i / 10 + 2);
            printf("I=%.1f J=%.1f\n", (float)i / 10, (float)i / 10 + 3);
        }
    }

    return 0;
}
