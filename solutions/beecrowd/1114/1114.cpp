#include <cstdint>
#include <cstdio>

int main() {
    int16_t p;

    while (scanf("%d", &p) && p != 2002) {
        printf("Senha Invalida\n");
    }

    printf("Acesso Permitido\n");

    return 0;
}
