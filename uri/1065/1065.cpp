#include <cstdio>

int main() {
    int n, c = 0, i = 5;

    while (i--) {
        scanf("%d", &n);

        if (n % 2 == 0) c++;
    }

    printf("%d valores pares\n", c);

    return 0;
}
