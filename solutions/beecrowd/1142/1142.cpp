#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t a, b;

    while (scanf("%d", &a) != EOF) {
        b = 1;
        while (a--) {
            printf("%d ", b++);
            printf("%d ", b++);
            printf("%d ", b++);

            b++;

            printf("PUM\n");
        }
    }

    return 0;
}
