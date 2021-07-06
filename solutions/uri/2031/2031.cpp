#include <cstdint>
#include <iostream>

int main() {
    int16_t n;
    std::string player1_sign, player2_sign;

    std::cin >> n;

    while (n--) {
        std::cin >> player1_sign;
        std::cin >> player2_sign;

        if (player1_sign == "ataque" && player2_sign == "ataque") {
            std::cout << "Aniquilacao mutua" << std::endl;
        } else if (player1_sign == "papel" && player2_sign == "papel") {
            std::cout << "Ambos venceram" << std::endl;
        } else if (player1_sign == "pedra" && player2_sign == "pedra") {
            std::cout << "Sem ganhador" << std::endl;
        } else if (
            player1_sign == "ataque"
            || (player1_sign == "pedra" && player2_sign == "papel")) {
            std::cout << "Jogador 1 venceu" << std::endl;
        } else {
            std::cout << "Jogador 2 venceu" << std::endl;
        }
    }

    return 0;
}
