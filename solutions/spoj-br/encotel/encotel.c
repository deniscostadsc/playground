#include <stdio.h>

int16_t main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (65 <= c && c <= 67)
            printf("%d", 2);
        else if (68 <= c && c <= 70)
            printf("%d", 3);
        else if (71 <= c && c <= 73)
            printf("%d", 4);
        else if (74 <= c && c <= 76)
            printf("%d", 5);
        else if (77 <= c && c <= 79)
            printf("%d", 6);
        else if (80 <= c && c <= 83)
            printf("%d", 7);
        else if (84 <= c && c <= 86)
            printf("%d", 8);
        else if (87 <= c && c <= 90)
            printf("%d", 9);
        else
            printf("%c", c);
    }
    return 0;
}
