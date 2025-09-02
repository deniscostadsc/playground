#include <algorithm>
#include <iostream>

int main() {
    int16_t huguinho, zezinho, luisinho;

    while (std::cin >> huguinho >> zezinho >> luisinho) {
        int16_t nephews[] = {huguinho, zezinho, luisinho};
        int16_t n = sizeof(nephews) / sizeof(nephews[0]);
        std::sort(nephews, nephews + n);

        if (nephews[1] == huguinho) {
            std::cout << "huguinho" << std::endl;
        } else if (nephews[1] == zezinho) {
            std::cout << "zezinho" << std::endl;
        } else {
            std::cout << "luisinho" << std::endl;
        }
    }
    return 0;
}
