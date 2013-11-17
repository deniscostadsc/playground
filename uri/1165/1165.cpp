#include <cstdio>
#include <cmath>

bool is_prime(unsigned long n){
    if (n == 2) return true;
    if (n % 2 == 0 || n < 2) return false;

    for (unsigned long i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0) return false;
    }
    return true;
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
