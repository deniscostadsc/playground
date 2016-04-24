#include <cstdio>
#include <iostream>
#include <string>

int c;

std::string dec2bin(int n) {
    if (n == 0) return "0";
    if (n == 1) { c++; return "1"; }

    if (n % 2 == 0) {
        return dec2bin(n / 2) + "0";
    } else {
        c++;
        return dec2bin(n / 2) + "1";
    }
}

int main() {
    std::string b;
    int n;
    while (scanf("%d", &n) && n != 0) {
        c = 0;
        b = dec2bin(n);
        std::cout << "The parity of " << b << " is " << c << " (mod 2).";
        std::cout << std::endl;
    }
    return 0;
}
