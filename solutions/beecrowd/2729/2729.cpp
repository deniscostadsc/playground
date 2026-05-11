#include <cstdint>
#include <iostream>
#include <set>
#include <sstream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    bool first_item = true;
    int16_t n;
    std::string line, item;
    std::set< std::string > shopping_list;

    std::cin >> n;
    std::cin.ignore();  // move cursor to next line

    for (int16_t i = 0; i < n; i++) {
        getline(std::cin, line);
        std::stringstream s_line(line);

        while (s_line >> item) {
            shopping_list.insert(item);
        }

        first_item = true;
        for (std::string item : shopping_list) {
            if (!first_item) {
                std::cout << " ";
            }
            std::cout << item;
            first_item = false;
        }
        std::cout << '\n';

        shopping_list.clear();
    }

    return 0;
}
