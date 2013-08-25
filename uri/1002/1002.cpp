#include <cstdio>

#define pi 3.14159

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        printf("A=%.4f\n", n * n * pi);
    }
    return 0;
}
