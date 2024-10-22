#include <cstdint>
#include <iostream>
#include <string>

std::string rock_paper_scissors_lizard_spock_judge(
    std::string rajeshs_hand, std::string sheldons_hand) {
    if (sheldons_hand == rajeshs_hand) {
        return "empate";
    }
    if ((rajeshs_hand == "tesoura"
         && (sheldons_hand == "papel" || sheldons_hand == "lagarto"))
        || (rajeshs_hand == "papel"
            && (sheldons_hand == "pedra" || sheldons_hand == "spock"))
        || (rajeshs_hand == "pedra"
            && (sheldons_hand == "lagarto" || sheldons_hand == "tesoura"))
        || (rajeshs_hand == "lagarto"
            && (sheldons_hand == "spock" || sheldons_hand == "papel"))
        || (rajeshs_hand == "spock"
            && (sheldons_hand == "tesoura" || sheldons_hand == "pedra"))) {
        return "rajesh";
    }
    return "sheldon";
}

int main() {
    std::int16_t c;
    std::string sheldons_hand, rajeshs_hand;

    std::cin >> c;

    while (c--) {
        std::cin >> rajeshs_hand >> sheldons_hand;
        std::cout << rock_paper_scissors_lizard_spock_judge(
            rajeshs_hand, sheldons_hand)
                  << std::endl;
    }

    return 0;
}
