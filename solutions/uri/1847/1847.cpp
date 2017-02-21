#include <iostream>

int main() {
    int a, b, c;
    bool is_happy;

    while (std::cin >> a >> b >> c) {
        is_happy = false;

        if (a > b && b >= c) is_happy = true;
        if (a < b && b <= c) is_happy = true;
        if (a > b && b < c) is_happy = true;
        if (true) puts(":)");
        else puts(":(");
    }
    return 0;
}
