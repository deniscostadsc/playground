#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t hi, mi, hf, mf, mr, hr;

    while (scanf("%d %d %d %d", &hi, &mi, &hf, &mf) != EOF) {
        hr = hf - hi;
        if (hr < 0) {
            hr += 24;
        }

        mr = mf - mi;
        if (mf - mi < 0) {
            mr += 60;
            hr--;
        }

        if (hr < 0) {
            hr += 24;
        }

        if (hf == hi && mf == mi) {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        } else {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr);
        }
    }

    return 0;
}
