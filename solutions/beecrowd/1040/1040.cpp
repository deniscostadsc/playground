#include <cstdio>

int main() {
    float a, b, c, d, e, m;

    while (scanf("%f %f %f %f", &a, &b, &c, &d) != EOF) {
        m = (a * 2 + b * 3 + c * 4 + d) / 10;

        printf("Media: %.1f\n", m);

        if (m >= 7.0) {
            printf("Aluno aprovado.\n");
        } else if (m >= 5.0) {
            printf("Aluno em exame.\n");

            scanf("%f", &e);

            printf("Nota do exame: %.1f\n", e);

            if (e + m / 2.0 > 5.0) {
                printf("Aluno aprovado.\n");
            } else {
                printf("Aluno reprovado.\n");
            }

            printf("Media final: %.1f\n", (e + m) / 2.0);
        } else {
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}
