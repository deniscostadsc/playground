#include <cmath>
#include <iostream>
#include <map>
#include <vector>

std::vector< std::uint32_t > primes;

bool is_prime(std::uint32_t n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0 || n < 2) {
        return false;
    }

    for (std::uint32_t i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void next_prime(std::uint32_t n) {
    while (!is_prime(++n)) {
    }
    primes.push_back(n);
}

std::uint32_t div_count(std::uint32_t n) {
    std::uint32_t count = 1, i = 0;
    std::map< std::uint32_t, std::int16_t > c;
    std::map< std::uint32_t, std::int16_t >::iterator iter;

    if (is_prime(n)) {
        return 2;
    }

    while (n > 1) {
        if (n % primes.at(i) == 0) {
            n /= primes.at(i);
            c[primes.at(i)]++;
        } else {
            if (primes.size() == i + 1) {
                next_prime(primes.at(i));
            }
            i++;
        }
    }

    for (iter = c.begin(); iter != c.end(); iter++) {
        count *= iter->second + 1;
    }

    return count;
}

int main() {
    std::int32_t t = 1, n = 1;

    primes.push_back(2);

    while (true) {
        std::int32_t d = div_count(t);

        if (d > 500) {
            std::cout << t << std::endl;
            break;
        }
        t += ++n;
    }
    return 0;
}
