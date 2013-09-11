#include <cstdio>

int main(){
    char o;
    int i, j, x = 5;
    float s = 0, n;
    scanf("%c", &o);
    for (i = 0; i <= 11; i++){
        for (j = 0; j <= 11; j++){
            scanf("%f", &n);
            if (j > x && j < 11 - x)
                s += n;
        }
        if (i > 5)
            x--;
    }
    if (o == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s / 30);
    return 0;
}
