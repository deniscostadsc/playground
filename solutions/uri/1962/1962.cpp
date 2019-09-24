#include <iostream>

int main() {
    int n, t, year;

    std::cin >> n;


    while (n--) {
        std::cin >> t;
        year = 2015 - t;

        if (year <= 0) {
            year--;
        }

        std::cout <<
            std::abs(year) <<
            (year < 0 ? " A.C." : " D.C.") <<
            std::endl;
    }

    return 0;
}
