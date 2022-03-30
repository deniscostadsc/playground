#include <cstdint>
#include <iostream>

int main() {
    for (std::int16_t i = 97; i <= 122; i++) {
        std::cout << i << " e " << char(i) << std::endl;
    }

    return 0;
}
