#include <iostream>

int
    main() {
    unsigned long long x, m;

    while (std::cin >> x >> m && x && m) {
        std::cout << x * m << std::endl;
    }

    return 0;
}
