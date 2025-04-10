#include <stdint.h>
#include <stdio.h>
#include <string.h>

int16_t count_letter_variations(char letter) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o'
        || letter == 's' || letter == 'A' || letter == 'E' || letter == 'I'
        || letter == 'O' || letter == 'S') {
        return 3;
    }
    return 2;
}

int main() {
    int32_t t;
    int32_t variations;
    char line[17];

    scanf("%d", &t);
    for (int16_t i = 0; i < t; i++) {
        scanf("%s", line);
        variations = 1;

        for (int16_t j = 0; j < strlen(line); j++) {
            variations *= count_letter_variations(line[j]);
        }

        printf("%d\n", variations);
    }
    return 0;
}
