#include <cctype>
#include <cstdint>
#include <iostream>
#include <set>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line, word;
    std::set< std::string > words;

    while (std::getline(std::cin, line)) {
        word = "";

        for (char &c : line) {
            if (isalpha(c)) {
                word += tolower(c);
            } else {
                if (word != "") {
                    words.insert(word);
                }

                word = "";
            }
        }

        if (word != "") {
            words.insert(word);
        }
    }

    for (std::string word : words) {
        std::cout << word << '\n';
    }

    return 0;
}
