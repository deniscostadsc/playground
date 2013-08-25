#include <cstdio>

int main(){
    int d[] = {100, 50, 20, 10, 5, 2, 1};
    int n, t = 0;

    scanf("%d", &n);
    printf("%d\n", n);
    while(t < 7){
        printf("%d nota(s) de R$ %d,00\n", n / d[t], d[t]);
        if (n >= d[t])
            n -= d[t] * (n / d[t]);
        t++;
    }
    return 0;
}
