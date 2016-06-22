#include <iostream>
#include <cmath>

int main() {
    int n, qt, s, g, i, lowest_sub, best_guesser;

    std::cin >> n;

    while (n--) {
        std::cin >> qt >> s;
        std::cin >> g;

        lowest_sub = std::abs(g - s);
        best_guesser = 1;
        i = 1;

        while (i++ < qt) {
            std::cin >> g;

            if (std::abs(g - s) < lowest_sub) {
                lowest_sub = std::abs(g - s);
                best_guesser = i;
            }
        }

        std::cout << best_guesser << std::endl;
    }

    return 0;
}
