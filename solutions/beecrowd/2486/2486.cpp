#include <cstdint>
#include <iostream>
#include <map>

int main() {
    std::int16_t MIN_VITAMIN_C = 110;
    std::int16_t MAX_VITAMIN_C = 130;

    std::int16_t t, n, total_c_vitamin;

    std::string food;
    std::map< std::string, int > vitamin_c_catalogue
        = {{" suco de laranja", 120},
           {" morango fresco", 85},
           {" mamao", 85},
           {" goiaba vermelha", 70},
           {" manga", 56},
           {" laranja", 50},
           {" brocolis", 34}};

    while (std::cin >> t && t) {
        total_c_vitamin = 0;
        for (std::int16_t i = 0; i < t; i++) {
            std::cin >> n;
            std::getline(std::cin, food);

            total_c_vitamin += n * vitamin_c_catalogue[food];
        }

        if (total_c_vitamin < MIN_VITAMIN_C) {
            std::cout << "Mais " << MIN_VITAMIN_C - total_c_vitamin << " mg";
        } else if (total_c_vitamin > MAX_VITAMIN_C) {
            std::cout << "Menos " << total_c_vitamin - MAX_VITAMIN_C << " mg";
        } else {
            std::cout << total_c_vitamin << " mg";
        }

        std::cout << std::endl;
    }

    return 0;
}
