#include <cstdio>

int main() {
    int n, s, l[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char d;
    scanf("%d", &n);
    getchar();
    while (n--) {
        s = 0;
        while ((d = getchar()) != '\n') {
            s += l[d - '0'];
        }
        printf("%d leds\n", s);
    }
    return 0;
}
