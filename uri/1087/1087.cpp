#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int x1, y1, x2, y2, d_x, d_y;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){
        if (x1 > x2) d_x = x1 - x2;
        else d_x = x2 - x1;

        if (y1 > y2) d_y = y1 - y2;
        else d_y = y2 - y1;

        if (x1 == x2 && y1 == y2)
            printf("0\n");
        else if (x1 == x2 || y1 == y2 || d_x == d_y)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}