#include <iostream>
#include <algorithm>

int main() {
    int lcs;
    std::string a, b;

    while (std::getline(std::cin, a) && std::getline(std::cin, b)) {
        lcs = 0;
        int matrix[a.size() + 1][b.size()];

        for (int i = 0; i <= (int)a.size(); i++) {
            for (int j = 0; j <= (int)b.size(); j++) {
                if (i == 0 || j == 0) {
                    matrix[i][j] = 0;
                } else if (a[i - 1] == b[j - 1]) {
                    matrix[i][j] =  1 + matrix[i - 1][j - 1];
                    lcs = std::max(matrix[i][j], lcs);
                } else {
                    matrix[i][j] = 0;
                }
            }
        }

        std::cout << lcs << std::endl;
    }

    return 0;
}
