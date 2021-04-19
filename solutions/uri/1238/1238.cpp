#include <iostream>
#include <string>

int main() {
    unsigned int i, n, l;
    std::string a, b;

    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;

        if (a.length() < b.length()) {
            l = a.length();
        } else {
            l = b.length();
        }

        for (i = 0; i < l; i++) {
            std::cout << a.at(i) << b.at(i);
        }

        if (a.length() > l) {
            for (i = l; i < a.length(); i++) {
                std::cout << a.at(i);
            }
        }

        if (b.length() > l) {
            for (i = l; i < b.length(); i++) {
                std::cout << b.at(i);
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
