#include <cstdio>

int main(){
    char t;
    int n, c = 0, r = 0, s = 0, soma = 0, e;

    scanf("%d", &n);
    while(n--){
        scanf("%d %c", &e, &t);
        soma += e;
        if (t == 'C'){
            c += e;
        } else if (t == 'R'){
            r += e;
        } else if (t == 'S'){
            s += e;
        }
    }

    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %\n", (float)c * 100.0 / soma);
    printf("Percentual de ratos: %.2f %\n", (float)r * 100.0 / soma);
    printf("Percentual de sapos: %.2f %\n", (float)s * 100.0 / soma);
}