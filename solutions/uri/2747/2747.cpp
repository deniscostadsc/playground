#include <iostream>

int main() {
    for (int i = 0; i < 39; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "|";
        for (int i = 0; i < 37; i++) {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;
    }
    for (int j = 0; j < 39; j++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    return 0;
}
