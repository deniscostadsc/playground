#include <cstdint>
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
    int c;

    // to use getchar with EOF, we need to declara the variable as int
    while ((c = getchar()) != EOF) {
        char character = static_cast<char>(c);
        bloggo(character);
    }

    return 0;
}
