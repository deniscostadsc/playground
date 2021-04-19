#include <iostream>
#include <string>

int rock_paper_scissors_lizard_spock(std::string sheldons, std::string rajs) {
    if (sheldons == rajs) {
        return 0;
    }
    if ((sheldons == "tesoura" && (rajs == "papel" || rajs == "lagarto"))
        || (sheldons == "papel" && (rajs == "pedra" || rajs == "Spock"))
        || (sheldons == "pedra" && (rajs == "lagarto" || rajs == "tesoura"))
        || (sheldons == "lagarto" && (rajs == "Spock" || rajs == "papel"))
        || (sheldons == "Spock" && (rajs == "tesoura" || rajs == "pedra"))) {
        return 1;
    }
    return -1;
}

int main() {
    int t, i, result;
    std::string sheldons, rajs;

    std::cin >> t;
    for (i = 1; i <= t; i++) {
        std::cin >> sheldons >> rajs;

        result = rock_paper_scissors_lizard_spock(sheldons, rajs);

        std::cout << "Caso #" << i << ": ";
        if (result == 1) {
            std::cout << "Bazinga!";
        } else if (result == 0) {
            std::cout << "De novo!";
        } else {
            std::cout << "Raj trapaceou!";
        }
        std::cout << std::endl;
    }
    return 0;
}
