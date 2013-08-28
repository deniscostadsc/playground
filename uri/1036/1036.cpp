#include <cstdio>
#include <cmath>

int main(){
    float a, b, c, d;
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - 4 * a * c;
    if (d > 0 || 2 * a == 0){
        printf("R1 = %.5f\n", ((b * -1) + sqrt(d)) / (2 * a));
        printf("R2 = %.5f\n", ((b * -1) - sqrt(d)) / (2 * a));
    } else {
        printf("Impossivel calcular\n");
    }
    return 0;
}
