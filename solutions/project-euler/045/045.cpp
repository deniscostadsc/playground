#include <iostream>

std::int64_t triangle(std::int64_t n) {
    return n * (n + 1) / 2;
}

std::int64_t pentagonal(std::int64_t n) {
    return n * (3 * n - 1) / 2;
}

std::int64_t hexagonal(std::int64_t n) {
    return n * (2 * n - 1);
}

int main() {
    bool got_pentagonal = false, got_hexagonal = false;
    std::int64_t tn, pn = 0, hn = 0, t = 285 + 1, p = 165, h = 143;

    while (!got_pentagonal && !got_hexagonal) {
        tn = triangle(t++);

        while (pn < tn) {
            pn = pentagonal(p++);
        }

        if (pn == tn) {
            got_pentagonal = true;
        }

        while (got_pentagonal && hn < pn) {
            hn = hexagonal(h++);
        }

        if (hn == pn) {
            got_hexagonal = true;
        } else {
            got_pentagonal = got_hexagonal = false;
        }
    }

    std::cout << tn << std::endl;

    return 0;
}
