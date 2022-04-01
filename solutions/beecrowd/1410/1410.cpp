#include <cstdint>
#include <iostream>

int main() {
    std::int16_t a, d, i, j, nearest_attack_player, defense_distance, count,
        temp;

    while (std::cin >> a >> d && a && d) {
        std::cin >> nearest_attack_player;

        for (i = 1; i < a; i++) {
            std::cin >> temp;
            if (temp < nearest_attack_player) {
                nearest_attack_player = temp;
            }
        }

        count = 0;

        for (j = 0; j < d; j++) {
            std::cin >> defense_distance;
            if (defense_distance <= nearest_attack_player) {
                count++;
            }
        }

        if (count >= 2) {
            std::cout << "N" << std::endl;
        } else {
            std::cout << "Y" << std::endl;
        }
    }

    return 0;
}
