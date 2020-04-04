#include <cstdio>

int main() {
    float sum = 0.0;
    int n, count = 0;

    while (scanf("%d", &n) && n >= 0) {
        sum += n;
        count += 1;
    }
    printf("%.2f\n", sum / count);

    return 0;
}
