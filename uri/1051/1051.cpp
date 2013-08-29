#include <cstdio>

int main(){
    float s;
    scanf("%f", &s);
    if (s <= 2000.0)
        printf("Isento\n");
    else if (s <= 3000.0)
        printf("R$ %.2f\n", (s - 2000.0) * 0.08);
    else if (s <= 4500.0)
        printf("R$ %.2f\n", 1000.0 * 0.08 + (s - 3000.0) * 0.18);
    else
        printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + (s - 4500.0) * 0.28);
    return 0;
}
