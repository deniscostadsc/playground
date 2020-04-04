#include <cstdio>
#include <cstring>

int
    main() {
    char m[12][10] = {"January",
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
    int n;

    scanf("%d", &n);
    for (int i = 0; i < strlen(m[n - 1]); i++) {
        printf("%c", m[n - 1][i]);
    }
    printf("\n");
    return 0;
}
