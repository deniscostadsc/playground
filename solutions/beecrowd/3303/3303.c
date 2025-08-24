#include <stdio.h>
#include <string.h>

int main() {
    char word[20];

    while (scanf("%s", word) != EOF) {
        if (strlen(word) < 10) {
            printf("palavrinha\n");
        } else {
            printf("palavrao\n");
        }
    }

    return 0;
}
