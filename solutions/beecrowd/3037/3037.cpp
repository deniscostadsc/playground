#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, joao, maria, x, d, i, j;

    std::cin >> n;

    for (i = 0; i < n; i++) {
        joao = 0;
        maria = 0;

        for (j = 0; j < 3; j++) {
            std::cin >> x >> d;
            joao += x * d;
        }

        for (j = 0; j < 3; j++) {
            std::cin >> x >> d;
            maria += x * d;
        }

        std::cout << (maria > joao ? "MARIA" : "JOAO") << '\n';
    }

    return 0;
}
