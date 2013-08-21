#include <stdio.h>
#include <string.h>

int main(){
    int d[31], e[31], n, p, t, i, s;
    char l;
    while(scanf("%d", &n) != EOF){
        memset(d, 0, sizeof(d));
        memset(e, 0, sizeof(e));
        t = 0;
        while(n--){
            scanf("%d %c", &p, &l);
            if (l == 'E')
                e[p - 30]++;
            else
                d[p - 30]++;
        }
        for (i = 0; i <= 30; ++i){
            if (e[i] < d[i])
                s = e[i];
            else
                s = d[i];

            if (s != 0)
                t += s;
        }
        printf("%d\n", t);
    }
    return 0;
}