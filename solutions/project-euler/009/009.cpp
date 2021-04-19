#include <cmath>
#include <iostream>

int s = 1000;
int s2 = s / 2;
int limit = sqrt(s2) - 1;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    int m, n, sm, k, d, a, b, c;

    for (m = 2; m <= limit; m++) {
        if (s2 % m == 0) {
            sm = s2 / m;

            while (sm % 2 == 0) {
                sm /= 2;
            }

            k = m % 2 == 1 ? m + 2 : m + 1;

            while (k < m * 2 && k <= sm) {
                if (sm % k == 0 && gcd(k, m) == 1) {
                    d = s2 / (k * m);
                    n = k - m;
                    a = d * (m * m - n * n);
                    b = 2 * d * m * n;
                    c = d * (m * m + n * n);

                    std::cout << a * b * c << std::endl;
                }
                k += 2;
            }
        }
    }

    return 0;
}
