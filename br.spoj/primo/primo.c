#include <stdio.h>
#include <math.h>

int is_prime (long n){
    int i;

    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (i = 11; i <= sqrt(n); i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    long n;

    scanf("%ld", &n);
    if (is_prime(n)) printf("sim");
    else printf("nao");
    
    return 0;
}
