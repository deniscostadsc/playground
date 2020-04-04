#include <cstdio>
#include <iostream>
#include <map>
#include <string>

int main() {
    double price, result;
    int n, p, q, quantity;
    std::map< std::string, double > prices;
    std::string fruit;

    std::cin >> n;

    while (n--) {
        result = 0.0;
        prices.clear();

        std::cin >> p;

        while (p--) {
            std::cin >> fruit >> price;
            prices[fruit] = price;
        }

        std::cin >> q;

        while (q--) {
            std::cin >> fruit >> quantity;
            result += prices[fruit] * quantity;
        }

        printf("R$ %.2lf\n", result);
    }

    return 0;
}
