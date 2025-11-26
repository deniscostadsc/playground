#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string leg;

    while (getline(std::cin, leg)) {
        if (leg == "esquerda") {
            std::cout << "ingles\n";
        } else if (leg == "direita") {
            std::cout << "frances\n";
        } else if (leg == "nenhuma") {
            std::cout << "portugues\n";
        } else if (leg == "as duas") {
            std::cout << "caiu\n";
        }
    }

    return 0;
}
