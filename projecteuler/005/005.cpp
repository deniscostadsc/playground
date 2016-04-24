#include <cstdio>
#include <cstdlib>

int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

long lcm(int x, int y) {
    return abs(x) / gcd(x, y) * abs(y);
}

long lcm_many(int numbers[], int n) {
    int i;
    long result = numbers[0];

    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    return result;
}


int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
                     12, 13, 14, 15, 16, 17, 18, 19, 20};

    printf("%ld\n", lcm_many(numbers, 20));

    return 0;
}
