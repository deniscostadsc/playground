#include <cstdio>

int main(){
    double n,  d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0}, m[] = {1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int t = 0, c;

    scanf("%lf", &n);
    printf("NOTAS:\n");
    do {
        printf("%d nota(s) de R$ %.2f\n", (int)n / (int)d[t], d[t]);
        if (n >= d[t])
            n -= d[t] * (int)(n / d[t]);
    } while(d[t++] != 2.0);

    t = 0;
    printf("MOEDAS:\n");
    do {
        c = 0;
        while(n >= m[t]){
            n -= m[t];
            c++;
        }
        printf("%d moeda(s) de R$ %.2f\n", c, m[t]);
        t++;
    } while(n >= 0.01);
    return 0;
}
