#include <cstdio>

int main() {
    int n, i;

    for (n = 0; n <= 9; n++) {
        scanf("%d", &i);

        if (i > 0) {
            printf("X[%d] = %d\n", n, i);
        } else {
            printf("X[%d] = 1\n", n);
        }
    }

    return 0;
}
