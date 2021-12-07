#include <cstdint>
#include <iostream>
#include <map>

bool has_repeated(int16_t n) {
    int16_t cur;
    std::map< int16_t, bool > previous;

    while (n) {
        cur = n % 10;
        if (previous[cur]) {
            return true;
        }
        previous[cur] = true;
        n = static_cast< int16_t >(n / 10);
    }

    return false;
}

int main() {
    int16_t n, m, count = 0;

    while (std::cin >> n >> m) {
        for (int16_t i = n; i <= m; i++) {
            if (!has_repeated(i)) {
                count++;
            }
        }
        std::cout << count << std::endl;
        count = 0;
    }

    return 0;
}
