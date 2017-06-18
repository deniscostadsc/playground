#include <iostream>

int main() {
    int i, plug, result = 0, conector[5];

    for (i = 0; i <= 4; i++) std::cin >> conector[i];

    for (i = 0; i <= 4; i++) {
        std::cin >> plug;
        result |= plug ^ conector[i];
    }

    std::cout << ((result) ? ("Y") : ("N")) << std::endl;

    return 0;
}
