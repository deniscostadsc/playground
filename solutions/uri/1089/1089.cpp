#include <iostream>

#define null -99999

int main() {
    int n, nn, c, p, pa, s, sa, si, sf;

    while (std::cin >> n && n != 0) {
        c = 0;
        pa = null;
        sa = null;  // previous direction
        si = null;  // initial direction
        sf = null;  // final direction
        nn = n;
        s = 0;

        while (nn--) {
            std::cin >> p;
            if (pa != null) {
                if (pa < p) {
                    s = 1;
                } else if (pa > p) {
                    s = -1;
                }

                if (sa != null) {
                    if (sa != 0 && s != sa) {
                        c++;
                    }
                }
                sa = s;
            }

            pa = p;

            if (si == null && s != 0) {
                si = s;
            }
            if (nn == 0) {
                sf = s;
            }
        }

        if (si != sf) {
            c++;
        } else if (si == sf && si != 0) {
            c += 2;
        }

        std::cout << c << std::endl;
    }

    return 0;
}
