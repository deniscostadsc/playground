#include <iostream>

int
    main() {
    int n, i, j, k, m, p, q, nl, np;

    while (std::cin >> n) {
        if (n == 0)
            break;

        k = n % 2;
        m = n / 2;

        nl = 1;
        q = n;

        for (i = 1; i <= n; i++) {
            np = 1;
            p = 0;

            for (j = 0; j < n; j++) {
                if (j == 0) {
                    std::cout << " ";
                } else {
                    std::cout << "  ";
                }

                if (p == 0 && np != nl) {
                    if (np < 10)
                        std::cout << " ";
                    std::cout << np;
                    np++;
                } else if (np == nl && p < q) {
                    if (nl < 10)
                        std::cout << " ";
                    std::cout << nl;
                    p++;
                } else {
                    np--;
                    if (np < 10)
                        std::cout << " ";
                    std::cout << np;
                }
            }

            if (i < m) {
                nl++;
                q -= 2;
            } else if (i == m && k == 1) {
                nl++;
                q = 1;
            } else if (i == m && k == 0) {
                q = 2;
            } else {
                q += 2;
                nl--;
            }

            std::cout << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
