#include <cstring>
#include <iostream>

int rfat[10];

int fat(int n) {
    if (rfat[n] != 0)
        return rfat[n];

    if (n <= 1) {
        rfat[n] = 1;
    } else {
        rfat[n] = n * fat(n - 1);
    }

    return rfat[n];
}

int main() {
    char n[6];
    int i, t, s;

    // C old school style;
    while (std::cin >> n && n[0] != '0') {
        t = strlen(n);
        i = 0;
        s = 0;

        while (n[i] != '\0') {
            s += (n[i] - '0') * fat(t--);
            i++;
        }

        std::cout << s << std::endl;
    }

    return 0;
}
