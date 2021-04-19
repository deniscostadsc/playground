#include <cstdio>
#include <cstring>

long int f[39];
long int r[39];

long int fib(long int n) {
    if (n == 0) {
        return f[0];
    }

    if (f[n] != 0) {
        return f[n];
    }

    f[n] = fib(n - 1) + fib(n - 2);
    r[n] = r[n - 1] + r[n - 2] + 2;

    return f[n];
}

int main() {
    int i, j;
    long int n;

    memset(f, 0, sizeof(f));
    memset(r, 0, sizeof(r));
    f[1] = 1;

    scanf("%d", &i);
    while (i--) {
        scanf("%ld", &n);
        printf("fib(%ld) = %ld calls = %ld\n", n, r[n], fib(n));
    }

    return 0;
}
