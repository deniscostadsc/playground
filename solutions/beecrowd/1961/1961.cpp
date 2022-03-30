#include <cstdint>
#include <iostream>

int main() {
    std::int16_t p, n, current_pipe, previous_pipe;
    bool game_over;

    while (std::cin >> p >> n) {
        std::cin >> previous_pipe;
        game_over = false;

        for (std::int16_t i = 0; i < n - 1; i++) {
            std::cin >> current_pipe;

            if (abs(previous_pipe - current_pipe) > p) {
                game_over = true;
                std::cout << "GAME OVER" << std::endl;
                break;
            }
            previous_pipe = current_pipe;
        }

        if (!game_over) {
            std::cout << "YOU WIN" << std::endl;
        }
    }

    return 0;
}
