#include <iostream>
#include <cstdio>

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) && x != 0 && y != 0){
        printf("%d\n", x + y);
    }
    return 0;
}
