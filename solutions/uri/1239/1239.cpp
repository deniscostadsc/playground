#include <cstdio>
#include <iostream>

bool i = false;
bool b = false;

void bloggo(char c) {
    if (c == '_') {
        if (!i) {
            std::cout << "<i>";
        } else {
            std::cout << "</i>";
        }

        i = !i;
    } else if (c == '*') {
        if (!b) {
            std::cout << "<b>";
        } else {
            std::cout << "</b>";
        }

        b = !b;
    } else {
        std::cout << c;
    }
}

int main() {
    char c;

    while ((c = getchar()) != EOF) {
        bloggo(c);
    }

    return 0;
}
