#include <cstdio>

int main(){
    int n, i, f, x, j, s;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &i, &f);
        if (i > f){ x = i; i = f; f = x; }
        s = 0;
        for (j = i + 1; j < f; j++){
            if (j % 2 != 0)
                s += j;
        }
        printf("%d\n", s);

    }
    return 0;
}