#include <iostream>
#include <vector>

int main() {
    int t, p, ticket, c;
    std::vector< int > tickets;

    while (std::cin >> t >> p && t != 0 && p != 0) {
        c = 0;

        for (int i = 0; i <= t; i++) {
            tickets.push_back(0);
        }

        while (p--) {
            std::cin >> ticket;

            if (tickets[ticket] == 1) {
                c++;
            }

            tickets[ticket]++;
        }

        std::cout << c << std::endl;
    }

    return 0;
}
