#include <iostream>
#include <map>
#include <cassert>

bool has_repeated(int n) {
    int cur;
    std::map< int, bool > previous;

    while(n) {
        cur = n % 10;
        if (previous[cur]) {
            return true;
        }
        previous[cur] = true;
        n = (int)(n / 10);
    }

    return false;
}

int main() {
    int n, m, count = 0;

    while (std::cin >> n >> m) {
        for (int i = n; i <= m; i++) {
            if (!has_repeated(i)) {
                count++;
            }
        }
        std::cout << count << std::endl;
        count = 0;
    }

    return 0;
}
