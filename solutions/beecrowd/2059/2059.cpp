#include <cstdint>
#include <iostream>

int main() {
    int16_t p, j1, j2, r, a, winner;

    while (std::cin >> p >> j1 >> j2 >> r >> a) {
        if ((p == 1 && (j1 + j2) % 2 == 0) || (p == 0 && (j1 + j2) % 2 == 1)) {
            winner = 1;
        } else {
            winner = 2;
        }

        if (r == 1 && a == 1) {
            winner = 2;
        } else if (r == 0 && a == 1) {
            winner = 1;
        } else if (r == 1) {
            winner = 1;
        }

        std::cout << "Jogador " << winner << " ganha!" << std::endl;
    }

    return 0;
}
