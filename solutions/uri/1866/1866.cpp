#include <iostream>

int
    main() {
    int c, n;

    std::cin >> c;

    while (c--) {
        std::cin >> n;

        if (n % 2 == 0) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << 1 << std::endl;
        }
    }
    return 0;
}
