#include <iostream>
#include <string>

int
    main() {
    std::string name;

    while (std::getline(std::cin, name)) {
        std::cout << (name.size() <= 80 ? "YES" : "NO") << std::endl;
    }

    return 0;
}
