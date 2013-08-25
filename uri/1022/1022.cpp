#include <cstdio>
#include <cmath>

int main(){
    int n, a, b, c, d, r, num, den, num_r, den_r, j;
    char o, i;

    scanf("%d", &n);
    while(n--){
        scanf("%d %c %d %c %d %c %d", &a, &i, &b, &o, &c, &i, &d);
        switch (o){
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

        if (std::abs(num) < std::abs(den))
            r = std::abs(num);
        else
            r = std::abs(den);

        num_r = num;
        den_r = den;

        j = 2;
        while (j <= r / 2 + 1){
            if (num_r % j == 0 && den_r % j == 0){
                num_r = num_r / j;
                den_r = den_r / j;
            } else {
                j++;
            }
        }

        printf("%d/%d = %d/%d\n", num, den, num_r, den_r);
    }
    return 0;
}
