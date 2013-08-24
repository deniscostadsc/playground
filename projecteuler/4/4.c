#include <stdio.h>
#include <string.h>

int capicua(int n){
    int i;
    char s[6];
    sprintf(s, "%d", n);
    for (i = 0; i < strlen(s) / 2; i++)
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

int main (){
    int i, j, g = 1;
    for (i = 100; i <= 999; i++)
        for (j = 100; j <= 999; j++)
            if (capicua(i * j) && i * j > g)
                g = i * j;
    printf("%d\n", g);
    return 0;
}