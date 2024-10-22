#include <cstdint>
#include <iostream>
#include <map>
#include <string>

int main() {
    std::int16_t n;
    std::map< std::string, bool > podekex;
    std::string pomekon;

    while (std::cin >> n) {
        for (std::int16_t i = 0; i < n; i++) {
            std::cin >> pomekon;
            podekex[pomekon] = true;
        }

        std::cout << "Falta(m) "
                  << 151 - static_cast< std::int16_t >(podekex.size())
                  << " pomekon(s)." << std::endl;
        podekex.clear();
    }

    return 0;
}
