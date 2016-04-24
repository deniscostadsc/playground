#include <iostream>
#include <cstdio>



int main() {
    int c, n, i = 0, o = 0;
    std::cin >> c;
    while (c--) {
        std::cin >> n;
        if (n > 9 && n < 21)
            i++;
        else
            o++;
    }

    std::cout << i << " in" << std::endl;
    std::cout << o << " out" << std::endl;
    return 0;
}
