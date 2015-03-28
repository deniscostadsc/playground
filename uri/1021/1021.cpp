#include <cstdio>

int main(){
    double n,  d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int t = 0, c, i;

    scanf("%lf", &n);
    printf("NOTAS:\n");

    t = 0;
    for (i = 0; i < 12; i++) {
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
