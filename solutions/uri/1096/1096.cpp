#include <cstdio>

int
    main() {
    for (int i = 1; i <= 9; i += 2) {
        printf("I=%d J=7\n", i);
        printf("I=%d J=6\n", i);
        printf("I=%d J=5\n", i);
    }
    return 0;
}
