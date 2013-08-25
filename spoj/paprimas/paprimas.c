#include <stdio.h>
#include <string.h>
#include <math.h>

int is_prime (int n){
    // 1 não é primo,
    // mas o problema acha que é 8(
    if (n < 1) return 0;
    if (n == 1) return 1;
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
    int i, j, s;
    char p[21];
    char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (scanf("%s", p) != EOF){
        s = 0;
        for (i = 0; i < strlen(p); i++){
            for (j = 0; j <= 51; j++){
                if (p[i] == l[j]){
                    s += j + 1;
                    break;
                }
            }
        }
        if (is_prime(s)){
            printf("It is a prime word.\n");
        } else {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
