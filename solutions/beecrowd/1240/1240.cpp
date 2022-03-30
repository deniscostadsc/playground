#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t n, i, la;
    std::string a, b;
    bool e;

    std::cin >> n;
    while (n--) {
        std::cin >> a >> b;

        e = true;

        if (b.length() > a.length()) {
            e = false;
        } else {
            la = a.length() - 1;

            for (i = b.length() - 1; i >= 0; i--) {
                if (b.at(i) != a.at(la)) {
                    e = false;
                    break;
                }
                la--;
            }
        }
        if (e) {
            std::cout << "encaixa" << std::endl;
        } else {
            std::cout << "nao encaixa" << std::endl;
        }
    }

    return 0;
}
