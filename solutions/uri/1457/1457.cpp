#include <cstdio>
#include <iostream>
#include <string>

unsigned int n, k;

unsigned long long oracle(unsigned int f) {
    int answer = n - (f * k);

    if (answer >= 1) {
        return answer * oracle(f + 1);
    }
    return 1;
}

int main() {
    unsigned int c;
    std::string k_str;

    std::cin >> c;

    while (c--) {
        std::cin >> n;
        std::cin >> k_str;
        k = k_str.length();
        std::cout << oracle(0) << std::endl;
    }

    return 0;
}
