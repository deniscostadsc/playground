#include <cstdint>
#include <iostream>

int main() {
    int32_t l, d, k, p, result;

    while (std::cin >> l >> d) {
        std::cin >> k >> p;

        result = l * k;
        if (l >= d) {
            result += l / d * p;
        }

        std::cout << result << std::endl;
    }

    return 0;
}
