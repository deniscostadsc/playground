#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t n, m, open_tabs;
    std::string command;

    while (std::cin >> n >> m) {
        open_tabs = n;

        for (std::int16_t i = 0; i < m; i++) {
            std::cin >> command;

            if (command == "fechou") {
                open_tabs++;
            } else {
                open_tabs--;
            }

            if (open_tabs < 0) {
                open_tabs = 0;
            }
        }

        std::cout << open_tabs << std::endl;
    }

    return 0;
}
