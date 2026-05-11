#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line;

    while (std::cin >> line) {
        if (line.find("13") != -1) {
            std::cout << line << " es de Mala Suerte\n";
        } else {
            std::cout << line << " NO es de Mala Suerte\n";
        }
    }

    return 0;
}
