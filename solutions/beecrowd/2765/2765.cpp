
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string sentence;

    while (std::getline(std::cin, sentence)) {
        size_t comma_position = sentence.find(',');
        std::cout << sentence.substr(0, comma_position) << '\n';
        std::cout << sentence.substr(comma_position + 1) << '\n';
    }

    return 0;
}
