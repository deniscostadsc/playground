#include <iostream>
#include <cmath>

int s = 1000;

int main() {
    int a, b, c;

    for (a = 1; a < (s - 3) / 3; a++) {
        for (b = a + 1; b < (s - 1 - a) / 2; b++) {
            c = s - a - b;
            if (c == sqrt(a * a + b * b)) {
                std::cout << a * b * c << std::endl;
                break;
            }
        }
    }

    return 0;
}
