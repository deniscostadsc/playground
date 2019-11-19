#include <iostream>
#include <cmath>

int main() {
    int a, b, r, q;
    bool q_is_zero, negative, positive;

    while (std::cin >> a >> b) {
        r = a % b;
        q = a / b;
        q_is_zero = false;
        negative = false;
        positive = false;

        while (r < 0) {
            if (!q_is_zero && q > 0) {
                q++;
            }

            if (!q_is_zero && q < 0) {
                q--;
            }

            if (q_is_zero || q == 0) {
                q_is_zero = true;
                if (!positive && !negative) {
                    positive = true;
                }
                if (positive) {
                    q++;
                }
                if (positive && q >= 1000) {
                    q = 0;
                    positive = false;
                    negative = true;
                }
                if (negative) {
                    q--;
                }
                if (negative && q <= -1000) {
                    q = 0;
                    positive = false;
                    negative = false;
                }
            }

            r = a - (q * b);
        }

        q_is_zero = false;

        std::cout << q << " " << r << std::endl;
    }

    return 0;
}
