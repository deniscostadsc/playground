#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t grade, average;

    while (scanf("%d", &grade) != EOF) {
        scanf("%d", &average);

        printf("%d\n", average * 2 - grade);
    }

    return 0;
}
