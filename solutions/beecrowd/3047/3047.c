#include <stdint.h>
#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int16_t monica_age, first_son, second_son;
    while (scanf("%d", &monica_age) != EOF) {
        scanf("%d", &first_son);
        scanf("%d", &second_son);

        printf(
            "%d\n",
            MAX(first_son,
                MAX(second_son, monica_age - first_son - second_son)));
    }
    return 0;
}
