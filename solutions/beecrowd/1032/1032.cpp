#include <cmath>
#include <cstdint>
#include <iostream>
#include <map>

std::map< std::int32_t, std::int32_t > next_primes;

bool is_prime(std::int32_t n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0 || n < 2) {
        return false;
    }

    for (std::int32_t i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::int32_t next_prime(std::int32_t n) {
    if (next_primes.find(n) != next_primes.end()) {
        return next_primes[n];
    }
    std::int32_t next_number = n + 1;
    while (!is_prime(next_number)) {
        next_number++;
    }
    next_primes[n] = next_number;
    return next_primes[n];
}

std::int16_t josephus(std::int16_t n, std::int16_t k) {
    if (n == 1) {
        return 1;
    }
    return ((josephus(n - 1, next_prime(k)) + k - 1) % n) + 1;
}

int main() {
    std::int16_t n;
    while (std::cin >> n && n) {
        std::cout << josephus(n, 2) << std::endl;
    }
}
