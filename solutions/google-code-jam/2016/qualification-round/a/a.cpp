#include <iostream>
#include <set>

int main() {
    int t, n, next, digits, i;
    std::set<int> all_digits;

    std::cin >> t;

    for (i = 1; i <= t; i++) {
        std::cin >> n;
        next = 0;

        std::cout << "Case #" << i << ": ";

        if (n == 0) {
            std::cout << "INSOMNIA" << std::endl;
        } else {
            do {
                next += n;
                digits = next;
                do {
                    all_digits.insert(digits % 10);
                    digits /= 10;
                } while (digits);
            } while (all_digits.size() < 10);

            std::cout << next << std::endl;
        }

        all_digits.clear();
    }
    return 0;
}
