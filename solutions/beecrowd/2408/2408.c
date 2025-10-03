#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        int scores[] = {a, b, c};
        size_t num_scores = sizeof(scores) / sizeof(scores[0]);

        qsort(scores, num_scores, sizeof(scores[0]), compare);

        printf("%d\n", scores[1]);
    }

    return 0;
}
