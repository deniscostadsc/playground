#include <iostream>
#include <string>

int main() {
    std::string n;

    while (std::cin >> n) {
        if (n == "42") {
            break;
        }
        std::cout << n << std::endl;
    }

    return 0;
}
