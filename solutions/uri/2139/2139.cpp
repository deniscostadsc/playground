#include <iostream>

int calculate_days(int month, int day) {
    int month_days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int total_days = 0;

    for (int i = month; i <= 12; i++) {
        total_days += month_days[i];
    }

    return total_days - day;
}

int main() {
    int month, day;

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
