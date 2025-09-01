#include <iostream>
#include <string>

int main() {
    std::string word;

    while (std::cin >> word) {
        if (word.size() < 10) {
            std::cout << "palavrinha" << std::endl;
        } else {
            std::cout << "palavrao" << std::endl;
        }
    }

    return 0;
}
