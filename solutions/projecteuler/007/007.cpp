#include <iostream>
#include <cmath>



bool is_prime(unsigned long long n) {
    if (n == 2) return true;
    if (n % 2 == 0 || n < 2) return false;

    for (unsigned long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int c = 0;
    unsigned long long n = 1;

    while (n++) {
        if (is_prime(n)) c++;
        if (c == 10001) {
            std::cout << n << std::endl;
            break;
        }
    }
    return 0;
}
