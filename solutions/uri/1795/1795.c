#include <stdint.h>
#include <stdio.h>
#include <string.h>

uint64_t memo[1000];

uint64_t calculate_sum(uint64_t line) {
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
    uint64_t line;
    memset(memo, 0, sizeof(memo));

    while (scanf("%llu", &line) != EOF) {
        printf("%llu\n", calculate_sum(line));
    }

    return 0;
}
