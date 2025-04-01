#include <stdio.h>

int main() {
    float a_price, g_price, a_distance, g_distance;
    while (scanf("%f %f %f %f", &a_price, &g_price, &a_distance, &g_distance)
           != EOF) {
        if (a_distance / a_price > g_distance / g_price) {
            puts("A");
        } else {
            puts("G");
        }
    }
    return 0;
}
