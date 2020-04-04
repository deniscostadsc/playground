#include <cmath>
#include <iostream>
#include <map>
#include <vector>

std::vector< unsigned long > primes;

bool is_prime(unsigned long n) {
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        return false;

    for (unsigned long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void next_prime(unsigned long n) {
    while (!is_prime(++n)) {
    }
    primes.push_back(n);
}

unsigned long div_count(unsigned long n) {
    unsigned long count = 1;
    unsigned long i = 0;
    std::map< unsigned long, int > c;
    std::map< unsigned long, int >::iterator iter;

    if (is_prime(n))
        return 2;

    while (n > 1) {
        if (n % primes.at(i) == 0) {
            n /= primes.at(i);
            c[primes.at(i)]++;
        } else {
            if (primes.size() == i + 1)
                next_prime(primes.at(i));
            i++;
        }
    }

    for (iter = c.begin(); iter != c.end(); iter++) {
        count *= iter->second + 1;
    }

    return count;
}

int main() {
    int t = 1, n = 1;

    primes.push_back(2);

    while (true) {
        int d = div_count(t);

        if (d > 500) {
            std::cout << t << std::endl;
            break;
        }
        t += ++n;
    }
    return 0;
}
