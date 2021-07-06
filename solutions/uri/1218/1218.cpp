#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int16_t m, f, c = 0;
    std::string s, l, cs, g;

    while (std::cin >> s) {
        m = 0;
        f = 0;

        getline(std::cin, l);  // it's a hack
        getline(std::cin, l);

        if (c) {
            std::cout << std::endl;
        }

        for (size_t i = 0; i < l.length(); i += 5) {
            if (s.at(0) == l.at(i) && s.at(1) == l.at(i + 1)) {
                if (l.at(i + 3) == 'M') {
                    m++;
                } else {
                    f++;
                }
            }
        }

        std::cout << "Caso " << ++c << ":" << std::endl;
        std::cout << "Pares Iguais: " << m + f << std::endl;
        std::cout << "F: " << f << std::endl;
        std::cout << "M: " << m << std::endl;
    }

    return 0;
}
