#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>

int main() {
    std::string m[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    std::int16_t n;

    while (scanf("%d", &n) != EOF) {
        printf("%s\n", m[n - 1].c_str());
    }

    return 0;
}
