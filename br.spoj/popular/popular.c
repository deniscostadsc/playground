#include <stdio.h>
#include <string.h>

int main() {
    int i, n, k, y, maior;

    while (scanf("%d", &i) && i != 0) {
        int v[i];

        memset(v, 0, sizeof(v));
        maior = v[0];

        for (k = 0; k < i; k++) {
            for (y = 0; y < i; y++) {
                scanf("%d", &n);
                v[y] += n;
                if (v[y] > maior) maior = v[y];
            }
        }

        printf("%d\n", maior);
    }

    return 0;
}
