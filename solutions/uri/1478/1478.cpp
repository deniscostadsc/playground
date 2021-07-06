#include <cstdint>
#include <iostream>

int main() {
    int16_t n, i, j, p, np;
    bool c;

    while (std::cin >> n && n) {
        p = 1;

        for (i = 1; i <= n; i++) {
            np = p;
            c = false;

            for (j = 0; j < n; j++) {
                if (j == 0) {
                    if (np < 10) {
                        std::cout << "  ";
                    } else if (np < 100) {
                        std::cout << " ";
                    }
                } else {
                    if (np < 10) {
                        std::cout << "   ";
                    } else if (np < 100) {
                        std::cout << "  ";
                    } else {
                        std::cout << " ";
                    }
                }

                std::cout << np;

                if (np == 1) {
                    c = true;
                }

                if (c) {
                    np++;
                } else {
                    np--;
                }
            }
            p++;

            std::cout << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
