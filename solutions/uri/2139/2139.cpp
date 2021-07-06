#include <cstdint>
#include <iostream>

int16_t calculate_days(int16_t month, int16_t day) {
    int16_t month_days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int16_t total_days = 0;

    for (int16_t i = month; i <= 12; i++) {
        total_days += month_days[i];
    }

    return total_days - day;
}

int main() {
    int16_t month, day;

    while (std::cin >> month >> day) {
        if (month == 12 && day == 25) {
            std::cout << "E natal!" << std::endl;
        } else if (month == 12 && day == 24) {
            std::cout << "E vespera de natal!" << std::endl;
        } else if (month == 12 && day > 25) {
            std::cout << "Ja passou!" << std::endl;
        } else {
            std::cout << "Faltam " << calculate_days(month, day)
                      << " dias para o natal!" << std::endl;
        }
    }

    return 0;
}
