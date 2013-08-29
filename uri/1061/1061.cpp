#include <cstdio>

int main(){
    char n[3];
    int d, dd, h, hh, m, mm, s, ss;
    scanf("%s %d", n, &d);
    scanf("%d : %d : %d", &h, &m, &s);
    scanf("%s %d", n, &dd);
    scanf("%d : %d : %d", &hh, &mm, &ss);

    s = ss - s;
    m = mm - m;
    if (h < hh) {
        d = dd - d;
    } else {
        d = dd - d - 1;
        if (d < 0)
            d = 0;
    }
    h = hh - h;
    if (h < 0)
        h = 24 + h;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
}
