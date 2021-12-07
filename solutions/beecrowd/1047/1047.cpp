#include <cstdint>
#include <cstdio>

int main() {
    int16_t hi, mi, hf, mf, mr, hr;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    hr = hf - hi;
    if (hf - hi < 0) {
        hr = 24 + hf - hi;
    }

    mr = mf - mi;
    if (mf - mi < 0) {
        mr = 60 + mf - mi;
        hr--;
    }

    if (hf == hi && mf == mi) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr);
    }

    return 0;
}
