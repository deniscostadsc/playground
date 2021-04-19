#include <algorithm>
#include <iostream>
#include <vector>

bool compare(int i, int j) {
    if (i % 2 == 0 && j % 2 == 1) {
        return true;
    }
    if (i % 2 == 1 && j % 2 == 0) {
        return false;
    }
    if (i % 2 == 0) {
        return i < j;
    } else {
        return i > j;
    }
}

int main() {
    int n, c;
    unsigned int i;
    std::vector< int > v;

    std::cin >> c;
    while (c--) {
        std::cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end(), compare);

    for (i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << std::endl;
    }

    return 0;
}
