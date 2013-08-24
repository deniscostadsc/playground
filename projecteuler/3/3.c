#include <stdio.h>
#include <math.h>

int is_prime (int n){
    int i;
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
    if (n == 5) return 1;
    if (n == 7) return 1;
    if (n % 2 == 0) return 0;
    if (n % 3 == 0) return 0;
    if (n % 5 == 0) return 0;
    if (n % 7 == 0) return 0;

    for (i = 11; i < n / 2; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int i;
    long long n = 600851475143;
    long long r;
    for (i = 2; i < sqrt(n); i++)
        if (n % i == 0 && is_prime(i)){
            r = i;
        }
    printf("%lld\n", r);
    return 0;
}
