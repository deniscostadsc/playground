#include <iostream>
#include <vector>

int main() {
    bool check;
    int n, r, i, j, _v;
    std::vector< int > v;

    while (std::cin >> n >> r) {
        for (i = 0; i < r; i++) {
            std::cin >> _v;
            v.push_back(_v);
        }

        if (n == r) {
            std::cout << "*" << std::endl;
            continue;
        }

        for (i = 1; i <= n; i++) {
            check = true;

            for (j = 0; j < r; j++) {
                if (v[j] == i) {
                    check = false;
                    break;
                }
            }

            if (check) {
                std::cout << i << " ";
            }
        }

        v.clear();

        std::cout << std::endl;
    }

    return 0;
}
