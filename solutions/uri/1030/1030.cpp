#include <iostream>
#include <vector>

int josephus(int n, int k) {
    if (n == 1) {
        return 1;
    }

    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    int k, n, q, c = 0;

    std::cin >> q;

    while (++c <= q) {
        std::cin >> n >> k;
        std::cout << "Case " << c << ": " << josephus(n, k) << std::endl;
    }

    return 0;
}
