#include <iostream>

int main() {
    int n, l, multiple_of_2, multiple_of_3, multiple_of_4, multiple_of_5;

    std::cin >> n;

    multiple_of_2 = 0, multiple_of_3 = 0, multiple_of_4 = 0, multiple_of_5 = 0;

    while (n--) {
        std::cin >> l;

        if (l % 2 == 0) {
            multiple_of_2++;
        }
        if (l % 3 == 0) {
            multiple_of_3++;
        }
        if (l % 4 == 0) {
            multiple_of_4++;
        }
        if (l % 5 == 0) {
            multiple_of_5++;
        }
    }

    std::cout << multiple_of_2 << " Multiplo(s) de 2" << std::endl;
    std::cout << multiple_of_3 << " Multiplo(s) de 3" << std::endl;
    std::cout << multiple_of_4 << " Multiplo(s) de 4" << std::endl;
    std::cout << multiple_of_5 << " Multiplo(s) de 5" << std::endl;

    return 0;
}
