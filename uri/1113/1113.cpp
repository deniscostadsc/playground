#include <cstdio>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) && a != b)
        if (a < b)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    return 0;
}