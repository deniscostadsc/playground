#include <iostream>
#include <cstdio>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= 10000; i++) {
        if (i % n == 2)
            printf("%d\n", i);
    }
    return 0;
}
