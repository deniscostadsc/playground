#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAX_M 1000

int main() {
    int16_t n;
    char line[MAX_M];
    scanf("%hd", &n);
    getchar();

    for (uint16_t i = 0; i < n; i++) {
        fgets(line, MAX_M, stdin);

        size_t line_length = strlen(line);
        if (line[line_length - 1] == '\n') {
            line[line_length - 1] = '\0';
            line_length--;
        }


        for (int32_t j = line_length - 1; j >= 0; j--) {
            if ((line[j] >= 65 && line[j] <= 90)  // between A and Z
                || (line[j] >= 97 && line[j] <= 122)) {  // between a and z
                line[j] = line[j] + 3;
            }
            if (j > line_length / 2) {

            } else {
                line[j] = line[j] - 1;
            }
            printf("%c", line[j]);
        }

        printf("\n");
    }

    return 0;
}
