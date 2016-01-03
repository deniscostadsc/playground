#include <iostream>

using namespace std;

int sum_all_divisible_by_n(int n, int target) {
    int p = target / n;
    return n * (p * (p + 1)) / 2;
}

int main() {
    cout << sum_all_divisible_by_n(3, 999) +
        sum_all_divisible_by_n(5, 999) -
        sum_all_divisible_by_n(15, 999) << endl;

    return 0;
}
