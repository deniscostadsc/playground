#include <stdio.h>

int main(){
    long n;
    int i, check;
    for (n = 1;; n++){
        check = 1;
        for (i = 1; i <= 20; ++i) {
            if (n % i != 0){
                check = 0;
                break;
            }
        }
        if (check){
            printf("%ld\n", n);
            break;
        }
    }
    return 0;
}