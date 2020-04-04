#include <cstdio>

int main() {
    double s = 1.0;

    for (int i = 2; i <= 100; i++) {
        s += 1.0 / static_cast< double >(i);
    }

    printf("%.2lf\n", s);

    return 0;
}
