#include <stdio.h>

int main(){
    int t, j, n, s = 0;
    char x[10];
    while(scanf("%d %d", &t, &j) && t != 0){
        while (t--){
            scanf("%s %d", x, &n);
            s += n;
        }
        printf("%d\n", j * 3 - s);
        s = 0;
    }
    return 0;
}