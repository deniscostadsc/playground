#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t i = 1, j = 60;

    while (j != 0) {
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }

    printf("I=%d J=%d\n", i, j);

    return 0;
}
