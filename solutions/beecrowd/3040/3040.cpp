#include <cstdint>
#include <iostream>

bool is_valid_tree(int16_t a, int16_t d, int16_t g) {
    return a >= 200 && a <= 300 && d >= 50 && g >= 150;
}

int main() {
    int16_t n, a, d, g;

    std::cin >> n;

    for (int16_t i = 0; i < n; i++) {
        std::cin >> a >> d >> g;
        std::cout << (is_valid_tree(a, d, g) ? "Sim" : "Nao") << std::endl;
    }

    return 0;
}
