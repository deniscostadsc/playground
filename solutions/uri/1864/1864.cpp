#include <iostream>
#include <string>

int main() {
    int n;
    std::string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    while (std::cin >> n) {
        std::cout << quote.substr(0, n) << std::endl;
    }
    return 0;
}
