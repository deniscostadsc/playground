#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, a, b;

    while (std::cin >> n >> a >> b) {
        if (a + b <= n) {
            std::cout << "Farei hoje!" << std::endl;
        } else {
            std::cout << "Deixa para amanha!" << std::endl;
        }
    }
    return 0;
}
