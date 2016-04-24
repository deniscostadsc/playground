#include <iostream>
#include <set>
#include <string>

std::set<std::string> matches;

int brute_force(std::string sequence) {
    int i;

    if (sequence.size() == 0) return 0;

    matches.insert(matches.begin(), sequence);

    for (i = 0; i < static_cast<int>(sequence.size()); i++) {
        std::string ggg(sequence.begin(), sequence.end());
        ggg.erase(ggg.begin() + i);
        brute_force(ggg);
    }

    return 1;
}

int main() {
    std::string sequence;

    while (std::cin >> sequence) {
        brute_force(sequence);

        for (std::set<std::string>::iterator it = matches.begin();
             it != matches.end(); it++) {
            std::cout << *it << std::endl;
        }

        std::cout << std::endl;

        matches.clear();
    }

    return 0;
}
