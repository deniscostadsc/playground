#include <cstdio>

int main() {
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF && x != 0 && y != 0) {
        if (x > 0 && y > 0)
            printf("primeiro\n");
        else if (x < 0 && y < 0)
            printf("terceiro\n");
        else if (x < 0)
            printf("segundo\n");
        else
            printf("quarto\n");
    }
    return 0;
}
