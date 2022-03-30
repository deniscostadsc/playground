#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t a, b = 1;

    scanf("%d", &a);

    while (a--) {
        printf("%d ", b++);
        printf("%d ", b++);
        printf("%d ", b++);

        b++;

        printf("PUM\n");
    }

    return 0;
}
