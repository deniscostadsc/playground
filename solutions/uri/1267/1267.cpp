#include <cstdio>
#include <iostream>
#include <vector>

int
    main() {
    int i, j, n, d, x;
    bool p;
    std::vector< int > m;

    while (std::cin >> n >> d && n && d) {
        for (i = 0; i < n; i++) {
            std::cin >> x;
            m.push_back(x);
        }

        for (i = 0; i < d - 1; i++) {
            for (j = 0; j < n; j++) {
                std::cin >> x;
                int &ref = m.at(j);
                ref = x & m.at(j);
            }
        }

        p = false;

        for (i = 0; i < n; i++) {
            if (m.at(i)) {
                std::cout << "yes" << std::endl;
                p = true;
                break;
            }
        }

        if (!p)
            std::cout << "no" << std::endl;

        m.clear();
    }

    return 0;
}
