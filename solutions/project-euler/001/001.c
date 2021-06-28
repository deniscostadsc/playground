#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t i, sum = 0;
    for (i = 0; i < 1000; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    printf("%d\n", sum);
    return 0;
}
