#include <iostream>
#include <iomanip>

int main() {
    int t;
    std::string word;

    std::cin >> t;

    while (t--) {
        std::cin >> word;
        std::cout <<
            std::fixed << std::setprecision(2) <<
            (float)word.size() / 100 << std::endl;
    }

    return 0;
}
