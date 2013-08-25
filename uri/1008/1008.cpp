#include <cstdio>

int main(){
    int a, b;
    float c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", c * b);
    return 0;
}