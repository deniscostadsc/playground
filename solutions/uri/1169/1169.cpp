#include <cstring>
#include <iostream>

unsigned long long grains(unsigned long long n) {
    if (n == 1)
        return 2;
    return 2 * grains(n - 1);
}

int main() {
    int n;
    unsigned long long x;

    std::cin >> n;
    while (n--) {
        std::cin >> x;

        if (x == 64) {
            std::cout << "1537228672809129 kg" << std::endl;
        } else {
            std::cout << grains(x) / 12 / 1000 << " kg" << std::endl;
        }
    }
    return 0;
}
