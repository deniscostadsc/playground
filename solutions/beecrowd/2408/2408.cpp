#include <algorithm>
#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t a, b, c;

    while (std::cin >> a >> b >> c) {
        int16_t scores[] = {a, b, c};
        std::sort(scores, scores + 3);

        std::cout << scores[1] << '\n';
    }

    return 0;
}
