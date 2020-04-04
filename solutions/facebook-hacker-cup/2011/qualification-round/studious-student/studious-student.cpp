#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool comparator(std::string first, std::string second) {
    int i, length;

    length = first.length();
    if (second.length() < first.length())
        length = second.length();

    for (i = 0; i < length; i++) {
        if (first.at(i) != second.at(i)) {
            return first < second;
        }
    }

    return first.length() > second.length();
}

int main() {
    int n, m, c = 0;
    std::string word;
    std::vector< std::string > words;
    std::vector< std::string >::iterator it;

    std::cin >> n;

    while (++c <= n) {
        std::cin >> m;

        while (m--) {
            std::cin >> word;
            words.push_back(word);
        }

        std::sort(words.begin(), words.end(), comparator);

        std::cout << "Case #" << c << ": ";

        for (it = words.begin(); it != words.end(); it++) {
            std::cout << *it;
        }

        std::cout << std::endl;

        words.clear();
    }

    return 0;
}
