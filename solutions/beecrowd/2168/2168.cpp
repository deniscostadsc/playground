#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n;
    std::int16_t cameras[101][101];

    while (std::cin >> n) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                std::cin >> cameras[i][j];

                if (i == 0 || j == 0) {
                    continue;
                }

                if (cameras[i][j] + cameras[i - 1][j] + cameras[i][j - 1]
                        + cameras[i - 1][j - 1]
                    >= 2) {
                    std::cout << "S";
                } else {
                    std::cout << "U";
                }
            }

            if (i != 0) {
                std::cout << std::endl;
            }
        }
    }

    return 0;
}
