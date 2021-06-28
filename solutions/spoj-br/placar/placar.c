#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main() {
    int32_t i, j, m, p, c = 1;
    char n[21], r[21];

    while (scanf("%d", &i) != EOF) {
        m = 11;

        while (i--) {
            scanf("%s %d", n, &p);

            if (p < m) {
                strncpy(r, n, sizeof(r));
                m = p;
            } else if (p == m) {
                for (j = 0; j <= 20; j++) {
                    if (r[j] < n[j] || r[j] == '\0') {
                        strncpy(r, n, sizeof(r));
                        break;
                    } else if (n[j] < r[j] || n[j] == '\0') {
                        strncpy(n, r, sizeof(n));
                        break;
                    }
                }
            }
        }

        printf("Instancia %d\n", c++);
        printf("%s\n", r);
    }

    return 0;
}
