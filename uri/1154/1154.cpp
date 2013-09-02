#include <cstdio>

int main(){
    float s, n, c = 0;
    while (scanf("%f", &n) && n > 0){
        s += n;
        c += 1.0;
    }
    printf("%.2f\n", s / c);
    return 0;
}