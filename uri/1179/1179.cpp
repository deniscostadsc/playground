#include <cstdio>

int main(){
    int j, n, p[5], i[5], pi = 0, ii = 0;
    while(scanf("%d", &n) != EOF){
        if (n % 2 == 0){
            p[pi] = n;
            pi++;
        } else {
            i[ii] = n;
            ii++;
        }

        if (pi == 5){
            for (j = 0; j <= 4; j++){
                printf("par[%d] = %d\n", j, p[j]);
                p[j] = NULL;
            }
            pi = 0;
        }
        if (ii == 5){
            for (j = 0; j <= 4; j++){
                printf("impar[%d] = %d\n", j, i[j]);
                i[j] = NULL;
            }
            ii = 0;
        }
    }
    for (j = 0; j <= 4; j++){
        if (i[j] == NULL)
            break;
        printf("impar[%d] = %d\n", j, i[j]);
    }
    for (j = 0; j <= 4; j++){
        if (p[j] == NULL)
            break;
        printf("par[%d] = %d\n", j, p[j]);
    }
    return 0;
}
