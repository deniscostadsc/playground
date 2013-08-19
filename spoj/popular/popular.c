#include <stdio.h>
#include <string.h>

int main (){
    int i, n, k, y, maior;
    while (scanf("%d", &i) && i != 0){ // para pegar os casos
        int votos[i];
        memset(votos, 0, sizeof(votos));
        maior = votos[0];
        for (k = 0; k < i; ++k){ // para pegar as linhas
            for (y = 0; y < i; ++y){ // para pegar as celulas
                scanf("%d", &n);
                votos[y] += n;
                if (votos[y] > maior){
                    maior = votos[y];
                }
            }
        }
        printf("%d\n", maior);
    }
    return 0;
}
