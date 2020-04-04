#include <iostream>

int main() {
    int s, t, f, result;

    std::cin >> s >> t >> f;

    result = (s + t + f) % 24;

    if (result < 0) {
        result += 24;
    }

    printf("%d\n", result);
}
