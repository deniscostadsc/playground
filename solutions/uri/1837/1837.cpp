#include <iostream>
#include <cmath>

int main() {
    int a, b, r, q;

    while (std::cin >> a >> b) {
        r = a % b;
        q = a / b;

        if (r < 0) {
            if (q > 0) {
                q++;
            }
            if (q < 0) {
                q--;
            }
            r = a - (q * b);
        }

        std::cout << q << " " << r << std::endl;
    }

    return 0;
}
