#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>

int main() {
    char e[1001];
    std::int16_t d, n, c, i;

    std::cin >> n;
    getchar();  // pra obrigar o cursor ir para a linha de baixo

    while (n--) {
        c = 0;
        i = 0;

        fgets(e, 1000, stdin);

        for (d = 0; d < static_cast< std::int16_t >(strlen(e)); d++) {
            if (e[d] == '<') {
                i++;
            } else if (e[d] == '>' && i - 1 >= 0) {
                i--;
                c++;
            }
        }

        std::cout << c << std::endl;
    }

    return 0;
}
