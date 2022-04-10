#include <cmath>
#include <cstdint>
#include <cstdio>

std::int16_t gcd(std::int16_t a, std::int16_t b) {
    std::int16_t mod_result, x;

    while (b != 0) {
        x = b;
        mod_result = a % b;
        b = mod_result < 0 ? mod_result + b : mod_result;
        a = x;
    }

    return a;
}

int main() {
    std::int16_t n, a, b, c, d, num, den, gcd_result;
    char o, i;

    scanf("%d", &n);
    while (n--) {
        scanf("%d %c %d %c %d %c %d", &a, &i, &b, &o, &c, &i, &d);
        switch (o) {
            case '+':
                num = (b * d) * a / b + (b * d) * c / d;
                den = b * d;
                break;
            case '-':
                num = (b * d) * a / b - (b * d) * c / d;
                den = b * d;
                break;
            case '*':
                num = a * c;
                den = b * d;
                break;
            default:
                num = a * d;
                den = b * c;
                break;
        }

        gcd_result = gcd(num, den);

        // printf("---> %d\n", gcd_result);

        printf("%d/%d = %d/%d\n", num, den, num / gcd_result, den / gcd_result);
    }
    return 0;
}
