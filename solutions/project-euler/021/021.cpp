#include <iostream>
#include <set>

int16_t sum_divisors(int16_t n) {
    int16_t sum = 1, i;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

bool is_amicable(int16_t n) {
    return n == sum_divisors(sum_divisors(n));
}

int main() {
    int16_t i, sum = 0;
    std::set< int16_t > amicables;
    std::set< int16_t >::iterator it;

    for (i = 1; i < 10000; i++) {
        if (is_amicable(i) && i != sum_divisors(i)) {
            amicables.insert(i);
            amicables.insert(sum_divisors(i));
        }
    }

    for (it = amicables.begin(); it != amicables.end(); it++) {
        sum += *it;
    }

    std::cout << sum << std::endl;

    return 0;
}
