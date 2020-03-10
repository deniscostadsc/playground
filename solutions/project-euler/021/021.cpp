#include <iostream>
#include <set>

int sum_divisors(int n) {
    int sum = 1, i;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

bool is_amicable(int n) {
    return n == sum_divisors(sum_divisors(n));
}


int main() {
    int i, sum = 0;
    std::set<int> amicables;
    std::set<int>::iterator it;

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
