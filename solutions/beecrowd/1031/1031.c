#include <stdint.h>
#include <stdio.h>

int16_t josephus(int16_t n, int16_t k) {
    if (n == 1) {
        return 1;
    }
    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    int16_t n, m;

    while (scanf("%d", &n) && n) {
        m = 1;

        /*
        Why need '- 1' and it's 12 not 13?

        Classic josephus function assume that sequence starts at 1, and shoots
        at gap-th person. This version of problem allways shot 1st first, and
        then goes to gap-th person.
        */
        while (josephus(n - 1, m) != 12) {
            m++;
        }
        printf("%d\n", m);
    }

    return 0;
}
