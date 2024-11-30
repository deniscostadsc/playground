#include <stdio.h>

int main() {
    float a, b, c, d, e, m;

    while (scanf("%f %f %f %f", &a, &b, &c, &d) != EOF) {
        m = (a * 2.0 + b * 3.0 + c * 4.0 + d) / 10.0;

        printf("Media: %.1f\n", ((float)(int)(m * 10) / 10.0));

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
