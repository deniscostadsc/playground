#include <stdio.h>
#include <math.h>

int is_prime (long n){
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
    int k = (int) sqrt(n) * 2;
    for (i = 11; i < k; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    long n;
    scanf("%ld", &n);
    if (is_prime(n)){
        printf("sim");
    } else {
        printf("nao");
    }
    return 0;
}
