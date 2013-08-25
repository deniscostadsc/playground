#include <cstdio>
#include <cmath>

int main(){
    char a[300];
    float b, c;
    scanf("%s", a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("TOTAL = R$ %.2f\n", b + round((c * 0.15) * 100) / 100);
    return 0;
}
