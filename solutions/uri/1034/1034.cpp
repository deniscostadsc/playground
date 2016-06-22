#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

std::vector<int> solutions;

int change(int m, std::set<int>::iterator it_a_begin,
           std::set<int>::iterator it_a_end, int n) {
    std::cout << *it_a_begin << std::endl;

    if (m < 0 || it_a_begin == it_a_end) return 0;
    if (m == 0) {
        solutions.push_back(n);
        return 1;
    }

    int r1 = change(m - *it_a_begin, it_a_begin, it_a_end, ++n);
    int r2 = change(m, ++it_a_begin, it_a_end, --n);

    return r1 + r2;
}

int main() {
    int t, n, m, z;
    std::set<int> a;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        while (n--) {
            std::cin >> z;
            a.insert(z);
        }

        change(m, a.begin(), a.end(), 0);

        std::cout << *min_element(solutions.begin(), solutions.end());
        std::cout << std::endl;

        a.clear();
        solutions.clear();
    }

    return 0;
}
