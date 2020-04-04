#include <cstdio>
#include <iostream>

int main() {
    int n, x, y, s;
    std::cin >> n;
    while (n--) {
        s = 0;
        std::cin >> x;
        std::cin >> y;

        if (x % 2 == 0)
            x++;

        for (int i = 0; i < y; i++, x += 2)
            s += x;

        std::cout << s << std::endl;
    }
    return 0;
}
