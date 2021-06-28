#include <stdio.h>
#include <string.h>

int16_t capicua(int16_t n) {
    int16_t i;
    char s[6];
    snprintf(s, sizeof(6), "%d", n);
    for (i = 0; i < strlen(s) / 2; i++)
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

int16_t main() {
    int16_t i, j, g = 1;
    for (i = 100; i <= 999; i++)
        for (j = 100; j <= 999; j++)
            if (i * j > g && capicua(i * j))
                g = i * j;
    printf("%d\n", g);
    return 0;
}
