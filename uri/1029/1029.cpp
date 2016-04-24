#include <cstdio>

long int f[39];
long int r[39];

long int fib(long int n) {
    if (f[n] != -1)
        return f[n];
    if (n <= 1) {
        f[n] = n;
    } else {
        f[n] = fib(n - 1) + fib(n - 2);
        if (n >= 3)
            r[n] = r[n - 1] + r[n - 2] + 2;
    }
    return f[n];
}

int main() {
    int i, j;
    long int n;
    for (j = 0; j <= 39; j++) {
        f[j] = -1;
        r[j] = -1;
    }

    r[0] = 0;
    r[1] = 0;
    r[2] = 2;

    scanf("%d", &i);
    while (i--) {
        scanf("%ld", &n);
        printf("fib(%ld) = %ld calls = %ld\n", n, r[n], fib(n));
    }
    return 0;
}
