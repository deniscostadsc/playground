#include <cstdio>

int main(){
    int n, a, b, x, i;
    scanf("%d", &n);
    if (n == 0){ printf("0\n"); return 0; }

    a = 1;
    b = 1;
    printf("0");
    for (i = 1; i < n; i++){
        printf(" %d", a);
        x = a;
        a = b;
        b = b + x;
    }
    printf("\n");
}