#include <iostream>

int main() {
    int n, r, previous_r, position;
    bool decreased;

    while (std::cin >> n) {
        decreased = false;

        std::cin >> previous_r;

        for (int i = 2; i <= n; i++) {
            std::cin >> r;

            if (!decreased && r < previous_r) {
                position = i;
                decreased = true;
            }

            previous_r = r;
        }

        std::cout << (decreased ? position : 0) << std::endl;
    }

    return 0;
}
