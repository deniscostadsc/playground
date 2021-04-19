#include <cstdio>

int main() {
    int hi, hf, mi, mf, m;

    while (1) {
        scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

        if (hi == 0 && hf == 0 && mi == 0 && mf == 0) {
            break;
        }

        if (hi <= hf) {
            m = (hf - hi) * 60;
        } else {
            m = (24 - (hi - hf)) * 60;
        }

        if (mi <= mf) {
            m += mf - mi;
        } else {
            m += 60 - 60 - mi + mf;
        }

        if (hi == hf && mi > mf) {
            m = 23 * 60 + (60 - mi + mf);
        }

        printf("%d\n", m);
    }

    return 0;
}
