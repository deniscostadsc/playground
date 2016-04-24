#include <iostream>
#include <vector>

struct Bank {
    int owe_to;
    int owe_value;
    int reserve;
};

int main() {
    int r, b, n, i, d, c, v;
    bool liquidated;
    std::vector<Bank> banks;

    while (std::cin >> b >> n && b && n) {
        //Bank banks[b + 1];

        for (i = 1; i <= b; i++) {
            std::cin >> r;

            Bank bank;
            bank.reserve = r;
            banks.push_back(bank);
            // banks[i] = bank;
        }

        while (n--) {
            std::cin >> d >> c >> v;

            banks[d].owe_to = c;
            banks[d].owe_value = v;

            banks[c].reserve += v;
            banks[d].reserve -= v;
            banks[d].owe_value -= v;
        }

        liquidated = true;
        for (i = 1; i <= b; i++) {
            if (banks[i].reserve < 0) {
                std::cout << "N" << std::endl;
                liquidated = false;
                break;
            }
        }

        if (liquidated) std::cout << "S" << std::endl;

        banks.clear();
    }

    return 0;
}
