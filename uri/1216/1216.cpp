#include <cstdio>

int main(){
    char s[100];
    double d, t, n = 0.0;
    while(gets(s)){
        scanf("%lf", &d);
        t += d;
        n += 1.0;
    }
    printf("%.1lf\n", t / n);
    return 0;
}
