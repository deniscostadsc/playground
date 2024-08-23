#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t people;

    while (scanf("%d", &people) != EOF) {
        if (people) {
            puts("vai ter duas!");
        } else {
            puts("vai ter copa!");
        }
    }

    return 0;
}
