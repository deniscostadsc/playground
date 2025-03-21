#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAX_M 1000

void reverse_string(char *string) {
    char *start = string;
    char *end = start + strlen(string) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int16_t n;
    char line[MAX_M];
    scanf("%d", &n);
    // hack to force cursor to next line
    fgets(line, MAX_M, stdin);

    for (uint16_t i = 0; i < n; i++) {
        fgets(line, MAX_M, stdin);

        size_t line_length = strlen(line);
        if (line[line_length - 1] == '\n') {
            line[line_length - 1] = '\0';
            line_length--;
        }

        // reverse_string(line);

        for (uint16_t j = line_length - 1; j >= 0; j--) {
            if ((line[j] >= 65 && line[j] <= 90)  // between A and Z
                || (line[j] >= 97 && line[j] <= 122)) {  // between a and z
                line[j] = line[j] + 3;
            }
            if (j >= line_length / 2) {
                line[j]--;
            }
            printf("%c", line[j]);
        }

        printf("\n");
    }

    return 0;
}
