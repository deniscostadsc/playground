#include <cstdio>
#include <cmath>

int is_prime (int n){
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
    if (n == 5) return 1;
    if (n == 7) return 1;
    if (n % 2 == 0) return 0;
    if (n % 3 == 0) return 0;
    if (n % 5 == 0) return 0;
    if (n % 7 == 0) return 0;

    int i;
    for (i = 11; i < sqrt(n) * 2; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n, i;
    scanf("%d", &i);
    while(i--){
        scanf("%d", &n);
        if (is_prime(n))
            printf("%d eh primo\n", n);
        else
            printf("%d nao eh primo\n", n);
    }

    return 0;
}
