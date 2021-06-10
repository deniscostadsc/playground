#include <stdio.h>
#include <string.h>

unsigned long long memo[1000];

unsigned long long calculate_sum(unsigned long long line) {
    if (memo[line] != 0) {
        return memo[line];
    }

    if (line == 0) {
        memo[line] = 1;
    } else {
        memo[line] = calculate_sum(line - 1) * 3;
    }

    return memo[line];
}

int main() {
    unsigned long long line;
    memset(memo, 0, sizeof(memo));

    while (scanf("%llu", &line) != EOF) {
        printf("%llu\n", calculate_sum(line));
    }

    return 0;
}
