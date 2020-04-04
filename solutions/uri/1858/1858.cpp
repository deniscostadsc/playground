#include <iostream>

int
    main() {
    int n, t, i, index, lowest = 21;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> t;

        if (t < lowest) {
            lowest = t;
            index = i;
        }
    }

    std::cout << index << std::endl;

    return 0;
}
