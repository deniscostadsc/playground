#include <stdio.h>

int main() {
    int a = 1, b = 2, aux, sum = 2;
    while (b < 4000000) {
        aux = a + b;
        a = b;
        b = aux;
        if (b % 2 == 0)
            sum += b;
    }
    printf("%d\n", sum);
    return 0;
}
