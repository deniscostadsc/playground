#include <iostream>

int josephus(int n, int k) {
    if (n == 1) {
        return 1;
    }
    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    int n, m;

    while (std::cin >> n && n) {
        m = 1;

        /*
        Why need '- 1' and it's 12 not 13?

        Because classic josephus function assume that sequence starts at 1,
        but shoots at gap-th person. This version of problem allways shot 1
        off first, and then goes to gap-th number.
        */
        while (josephus(n - 1, m) != 12) {
            m++;
        }

        std::cout << m << std::endl;
    }

    return 0;
}
