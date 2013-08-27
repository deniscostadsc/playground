#include <cstdio>

int main(){
    int p;
    while(1){
        scanf("%d", &p);
        if (p != 2002)
            printf("Senha Invalida\n");
        else
            break;
    }
    printf("Acesso Permitido\n");
}
