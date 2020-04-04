#include <iostream>

int main() {
    int i, n, o[5], c, r;
    char l[] = "ABCDE";

    while (std::cin >> n && n != 0) {
        while (n--) {
            std::cin >> o[0] >> o[1] >> o[2] >> o[3] >> o[4];
            c = 0;
            for (i = 0; i <= 4; i++) {
                if (o[i] <= 127) {
                    r = i;
                    c++;
                }
            }

            if (c != 1) {
                std::cout << "*" << std::endl;
            } else {
                std::cout << l[r] << std::endl;
            }
        }
    }

    return 0;
}
