#include <cstdio>

int main() {
    int n, d;
    float i;

    scanf("%d", &n);

    while (n--) {
        scanf("%f", &i);
        d = 0;

        while (i > 1.0) {
            d++;
            i /= 2;
        }

        printf("%d dias\n", d);
    }
}
