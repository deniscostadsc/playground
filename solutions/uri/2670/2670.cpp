#include <algorithm>
#include <iostream>

int
    main() {
    int a1, a2, a3;

    while (std::cin >> a1 >> a2 >> a3) {
        std::cout << std::min(
                         std::min(a2 * 2 + a3 * 4, a1 * 2 + a3 * 2),
                         a1 * 4 + a2 * 2)
                  << std::endl;
    }

    return 0;
}
