#include <cstdint>
#include <cstdio>
#include <iostream>

int main() {
    std::int16_t hour, minute, late;

    while (scanf("%d:%d", &hour, &minute) != EOF) {
        std::cout << "Atraso maximo: "
                  << (hour >= 7 ? minute : 0)
                + (hour - 7 > 0 ? (hour - 7) * 60 : 0)
                  << std::endl;
    }

    return 0;
}
