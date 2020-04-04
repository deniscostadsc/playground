#include <iostream>

int
    main() {
    int n, i;
    std::cin >> n;
    for (i = 1; i <= n; i += 2)
        std::cout << i << std::endl;
    return 0;
}
