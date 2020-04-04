#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::string code;
    std::vector< std::string > codes;
    std::vector< std::string >::iterator it;

    while (std::cin >> n) {
        while (n--) {
            std::cin >> code;
            codes.push_back(code);
        }
        std::sort(codes.begin(), codes.end());

        for (it = codes.begin(); it != codes.end(); it++) {
            std::cout << *it << std::endl;
        }
        codes.clear();
    }

    return 0;
}
