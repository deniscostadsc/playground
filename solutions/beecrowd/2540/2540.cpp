#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t n, v, pro_impeachment_count;

    while (std::cin >> n) {
        pro_impeachment_count = 0;

        for (int32_t i = 0; i < n; i++) {
            std::cin >> v;

            if (v == 1) {
                pro_impeachment_count += 1;
            }
        }

        if (pro_impeachment_count * 3 >= n * 2) {
            std::cout << "impeachment" << '\n';
        } else {
            std::cout << "acusacao arquivada" << '\n';
        }
    }

    return 0;
}
