#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, index, answer;

    while (std::cin >> n) {
        for (index = 1; index <= n; index++) {
            std::cin >> answer;
            std::cout << "resposta " << index << ": " << answer << std::endl;
        }
    }

    return 0;
}
