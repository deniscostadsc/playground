#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, votes, carlos_votes = 0;

    std::cin >> n;

    for (int16_t i = 0; i < n; i++) {
        std::cin >> votes;
        if (i == 0) {
            carlos_votes = votes;
            continue;
        }

        if (votes > carlos_votes) {
            std::cout << "N" << '\n';
            return 0;
        }
    }

    std::cout << "S" << '\n';

    return 0;
}
