#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

int main() {
    bool c;
    std::int16_t i, n, q;
    double a, p;
    std::string attendances;
    std::string name;
    std::vector< std::string > names;

    std::cin >> n;

    while (n--) {
        std::cin >> q;

        for (i = 0; i < q; i++) {
            std::cin >> name;
            names.push_back(name);
        }

        c = false;

        for (i = 0; i < q; i++) {
            a = 0;
            p = 0;

            std::cin >> attendances;

            for (size_t j = 0; j < attendances.length(); j++) {
                if (attendances.at(j) == 'A') {
                    a++;
                } else if (attendances.at(j) == 'P') {
                    p++;
                }
            }

            if (a / (a + p) > 0.25) {
                if (c) {
                    std::cout << " ";
                }
                std::cout << names[i];
                c = true;
            }
        }

        attendances.clear();
        names.clear();

        std::cout << std::endl;
    }

    return 0;
}
