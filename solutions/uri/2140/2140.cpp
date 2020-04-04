#include <cstring>
#include <iostream>

int main() {
    int n, m;
    int bills[] = {2, 5, 10, 20, 50, 100};
    int possible_changes[201];

    memset(possible_changes, 0, sizeof(possible_changes));

    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5; j++) {
            possible_changes[bills[i] + bills[j]] = bills[i] + bills[j];
        }
    }

    while (std::cin >> n >> m && n && m) {
        if (m - n <= 200 && possible_changes[m - n]) {
            std::cout << "possible" << std::endl;
        } else {
            std::cout << "impossible" << std::endl;
        }
    }

    return 0;
}
