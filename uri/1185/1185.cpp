#include <cstdio>

int main(){
    char o;
    int i, j, x;
    float s, n;
    scanf("%c", &o);
    x = 12;
    for (i = 0; i <= 11; i++){
        x--;
        for (j = 0; j <= 11; j++){
            scanf("%f", &n);
            if (j < x)
                s += n;
        }
    }
    if (o == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s / 66);
    return 0;
}
