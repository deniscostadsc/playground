#include <iostream>
#include <string>

int main() {
    int n, i = 1, a, b;
    std::string first_player, second_player;

    while (std::cin >> n && n) {
        std::cin >> first_player;
        std::cin >> second_player;

        if (i > 1) std::cout << std::endl;
        std::cout << "Teste " << i++ << std::endl;

        while (n--) {
            std::cin >> a >> b;

            if ((a + b) % 2) {
                std::cout << second_player << std::endl;
            } else {
                std::cout << first_player << std::endl;
            }
        }
    }

    return 0;
}
