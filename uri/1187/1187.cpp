#include <cstdio>

int main() {
    char o;
    int i, j, l = 1;
    double s = 0, n;
    scanf("%c", &o);
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%lf", &n);
            if (j >= l && j <= 11 - l)
                s += n;
        }
        l++;
    }
    if (o == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s / 30);
    return 0;
}
