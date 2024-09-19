#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t hi, hf, hr;

    scanf("%d %d", &hi, &hf);

    hr = hf - hi;

    if (hf - hi < 0) {
        hr = 24 + hf - hi;
    }

    if (hf == hi) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", hr);
    }

    return 0;
}
