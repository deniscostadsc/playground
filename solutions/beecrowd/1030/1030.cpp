#include <iostream>
#include <vector>

std::int16_t josephus(std::int16_t n, std::int16_t k) {
    if (n == 1) {
        return 1;
    }

    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    std::int16_t k, n, q, c = 0;

    std::cin >> q;

    while (++c <= q) {
        std::cin >> n >> k;
        std::cout << "Case " << c << ": " << josephus(n, k) << std::endl;
    }

    return 0;
}
