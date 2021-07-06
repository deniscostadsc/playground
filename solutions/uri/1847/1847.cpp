#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    int16_t a, b, c;
    bool is_happy;

    while (std::cin >> a >> b >> c) {
        if (a > b && b <= c) {
            is_happy = true;
        } else if (a < b && b < c && (b - a) <= (c - b)) {
            is_happy = true;
        } else if (a > b && b > c && (a - b) > (b - c)) {
            is_happy = true;
        } else if (a == b && b < c) {
            is_happy = true;
        } else {
            is_happy = false;
        }

        if (is_happy) {
            puts(":)");
        } else {
            puts(":(");
        }
    }

    return 0;
}
