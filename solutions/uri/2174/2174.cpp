#include <iostream>
#include <map>

int main() {
    int n;
    std::map< std::string, bool > podekex;
    std::string pomekon;

    while (std::cin >> n) {
        for (int i = 0; i < n; i++) {
            std::cin >> pomekon;
            podekex[pomekon] = true;
        }

        std::cout << "Falta(m) " << 151 - static_cast< int >(podekex.size())
                  << " pomekon(s)." << std::endl;
        podekex.clear();
    }

    return 0;
}
