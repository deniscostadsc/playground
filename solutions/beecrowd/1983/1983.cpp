#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n;
    std::int32_t m, bigest_m;
    float grade, bigest_grade;

    std::cin >> n;
    std::cin >> bigest_m >> bigest_grade;
    n--;

    while (n--) {
        std::cin >> m >> grade;

        if (grade > bigest_grade) {
            bigest_grade = grade;
            bigest_m = m;
        }
    }

    if (bigest_grade < 8.0) {
        std::cout << "Minimum note not reached" << std::endl;
    } else {
        std::cout << bigest_m << std::endl;
    }

    return 0;
}
