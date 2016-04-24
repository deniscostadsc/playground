#include <iostream>

int main() {
    int i, x, y, s = 0;

    std::cin >> x;
    std::cin >> y;

    if (x < y) {
        for (i = x + 1; i < y; i++) {
            if (i % 2 != 0) s += i;
        }
    } else {
        for (i = y + 1; i < x; i++) {
            if (i % 2 != 0) s += i;
        }
    }

    std::cout << s << std::endl;

    return 0;
}
