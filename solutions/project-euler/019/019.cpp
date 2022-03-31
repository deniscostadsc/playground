#include <iostream>

std::int16_t week_day(std::int16_t day, std::int16_t month, std::int16_t year) {
    std::int16_t t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

int main() {
    std::int16_t y, m, count = 0;
    for (y = 1901; y <= 2000; y++) {
        for (m = 1; m <= 12; m++) {
            if (week_day(1, m, y) == 0) {
                count++;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}
