#include <cstdint>
#include <iostream>
#include <vector>

struct Bank {
    std::int16_t owe_to;
    std::int16_t owe_value;
    std::int16_t reserve;
};

int main() {
    std::int16_t r, b, n, i, d, c, v;
    bool liquidated;
    std::vector< Bank > banks;

    while (std::cin >> b >> n && b && n) {
        for (i = 0; i < b; i++) {
            std::cin >> r;

            Bank bank;
            bank.reserve = r;
            banks.push_back(bank);
        }

        while (n--) {
            std::cin >> d >> c >> v;

            banks[d - 1].owe_to = c;
            banks[d - 1].owe_value = v;

            banks[c - 1].reserve += v;
            banks[d - 1].reserve -= v;
            banks[d - 1].owe_value -= v;
        }

        liquidated = true;
        for (i = 0; i < b; i++) {
            if (banks[i].reserve < 0) {
                std::cout << "N" << std::endl;
                liquidated = false;
                break;
            }
        }

        if (liquidated) {
            std::cout << "S" << std::endl;
        }

        banks.clear();
    }

    return 0;
}
