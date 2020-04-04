#include <iostream>

int
    main() {
    int n, c, m, j;

    while (std::cin >> n) {
        m = 0;
        j = 0;

        if (n == 0)
            break;

        while (n--) {
            std::cin >> c;

            if (c == 0) {
                m++;
            } else {
                j++;
            }
        }

        std::cout << "Mary won " << m << " times and John won " << j;
        std::cout << " times" << std::endl;
    }

    return 0;
}
