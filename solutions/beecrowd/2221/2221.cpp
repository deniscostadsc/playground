#include <cstdint>
#include <iostream>

std::int16_t calculate_value(
    std::int16_t attack,
    std::int16_t defense,
    std::int16_t bonus,
    std::int16_t level) {
    std::int16_t result = (attack + defense) / 2;
    return result + (level % 2 == 0 ? bonus : 0);
}

int main() {
    std::int16_t t, a, d, l, bonus, dabriels_value, guartes_value;

    std::cin >> t;

    while (t--) {
        std::cin >> bonus;
        std::cin >> a >> d >> l;
        dabriels_value = calculate_value(a, d, bonus, l);
        std::cin >> a >> d >> l;
        guartes_value = calculate_value(a, d, bonus, l);

        if (dabriels_value < guartes_value) {
            std::cout << "Guarte" << std::endl;
        } else if (guartes_value < dabriels_value) {
            std::cout << "Dabriel" << std::endl;
        } else {
            std::cout << "Empate" << std::endl;
        }
    }

    return 0;
}
