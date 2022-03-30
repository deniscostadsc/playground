#include <cstdint>
#include <iostream>
#include <set>
#include <string>

std::set< std::string > matches;

void brute_force(std::string sequence) {
    std::int16_t i;

    if (sequence.size()) {
        matches.insert(sequence);

        for (i = 0; i < static_cast< std::int16_t >(sequence.size()); i++) {
            if (matches.count(sequence.substr(0, i) + sequence.substr(i + 1))) {
                continue;
            }
            brute_force(sequence.substr(0, i) + sequence.substr(i + 1));
        }
    }
}

int main() {
    std::string sequence;

    while (std::cin >> sequence) {
        brute_force(sequence);

        for (std::set< std::string >::iterator it = matches.begin();
             it != matches.end();
             it++) {
            std::cout << *it << std::endl;
        }

        std::cout << std::endl;

        matches.clear();
    }

    return 0;
}
