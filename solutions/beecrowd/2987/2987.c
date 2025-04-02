#include <stdio.h>

int main() {
    char letter[2];

    while (scanf("%s", letter) != EOF) {
        printf("%d\n", ((int)letter[0]) - 64);
    }

    return 0;
}
