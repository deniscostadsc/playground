#include <iostream>
#include <vector>

int find(std::vector<int> v, int n) {
    for (int i = 0; i < v.size(); i++) {
        if (n == v.at(i)) return i;
    }
    return -1;
}

int main() {
    int i, j, n, p, overtakes;
    std::vector<int> start;
    std::vector<int> finish;

    while (std::cin >> n) {
        start.clear();
        finish.clear();
        overtakes = 0;

        for (i = 0; i < n; i++) {
            std::cin >> p;
            start.push_back(p);
        }

        for (i = 0; i < n; i++) {
            std::cin >> p;
            finish.push_back(p);
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < find(start, finish[i]); j++) {
                if (find(finish, start.at(j)) > i) overtakes++;
            }
        }
        std::cout << overtakes << std::endl;
    }

    return 0;
}
