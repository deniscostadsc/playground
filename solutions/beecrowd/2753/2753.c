#include <stdint.h>
#include <stdio.h>

int main() {
    for (int16_t i = 97; i <= 122; i++) {
        printf("%d e %c\n", i, i);
    }

    return 0;
}
