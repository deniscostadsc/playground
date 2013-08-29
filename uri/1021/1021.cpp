#include <cstdio>

int main(){
    double n,  d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int t = 0, c;

    scanf("%lf", &n);
    printf("NOTAS:\n");

    t = 0;
    while (n >= 0.01){
        c = 0;
        while (n >= d[t]){
            n -= d[t];
            c++;
        }
        if (d[t] == 1.0)
            printf("MOEDAS:\n");
        if (d[t] >= 2.0 )
            printf("%d nota(s) de R$ %.2f\n", c, d[t]);
        else
            printf("%d moeda(s) de R$ %.2f\n", c, d[t]);
        t++;
    }
    return 0;
}
