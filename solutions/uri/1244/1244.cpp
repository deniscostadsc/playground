#include <algorithm>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

struct Pair {
    std::string first;
    uint16_t second;
};

bool compare(Pair i, Pair j) {
    if (i.first.length() == j.first.length()) {
        return i.second < j.second;
    }
    return i.first.length() > j.first.length();
}

int main() {
    int16_t n;
    std::string s;

    std::cin >> n;
    getline(std::cin, s);  // it's a hack!!!

    while (n--) {
        /* get the line
           create a iterator
           run a "split" by space */
        getline(std::cin, s);
        std::istringstream is(s);
        std::vector< std::string > raw_strings(
            std::istream_iterator< std::string > {is},
            std::istream_iterator< std::string > {});

        std::vector< Pair > strings;

        for (uint16_t i = 0; i < raw_strings.size(); i++) {
            strings.push_back({raw_strings.at(i), i});
        }

        sort(strings.begin(), strings.end(), compare);

        for (uint16_t i = 0; i < strings.size(); i++) {
            std::cout << strings.at(i).first;
            if (i < strings.size() - 1) {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
