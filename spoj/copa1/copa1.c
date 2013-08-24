#include <stdio.h>
#include <string.h>

int main(){
    int a, b, i, g[16], j = 8, t = 1, l = 1;
    char c[] = "ABCDEFGHIJKLMNOP";
    memset(g, 0, sizeof(g));

    while(scanf("%d %d", &a, &b) != EOF){
        if (a > b){
            for (i = 0; i < t; i++) g[(l - 1) * 2 * t + t + i] = 1;
        } else {
            for (i = 0; i < t; i++) g[(l - 1) * 2 * t + i] = 1;
        }
        if (l >= j){
            j /= 2;
            t *= 2;
            l = 0;
        }
        l++;
    }

    for (i = 0; i <= 15; i++){
        if (g[i] == 0){
            printf("%c", c[i]);
            break;
        }
    }
    return 0;
}