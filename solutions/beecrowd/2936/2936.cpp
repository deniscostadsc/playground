#include <cstdint>
#include <iostream>

int main() {
    int16_t curupira, boitata, boto, mapinguari, iara;

    while (std::cin >> curupira >> boitata >> boto >> mapinguari >> iara) {
        std::cout << curupira * 300 + boitata * 1500 + boto * 600
                + mapinguari * 1000 + iara * 150 + 225
                  << std::endl;
    }

    return 0;
}
