#include <iostream>
#include <set>
#include <string>

int main() {
    std::string jewel;
    std::set< std::string > unique_jewels;

    while (std::cin >> jewel) {
        unique_jewels.insert(jewel);
    }
    std::cout << unique_jewels.size() << std::endl;

    return 0;
}
