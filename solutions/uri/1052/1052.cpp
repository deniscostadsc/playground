#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>

int main() {
    char m[12][10]
        = {"January",
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
           "December"};
    int16_t n;

    scanf("%d", &n);
    for (std::string::size_type i = 0; i < strlen(m[n - 1]); i++) {
        printf("%c", m[n - 1][i]);
    }
    printf("\n");
    return 0;
}
