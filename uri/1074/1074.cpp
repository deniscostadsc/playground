#include <cstdio>

int main(){
    int q, n;
    scanf("%d", &q);
    while(q--){
        scanf("%d", &n);
        if (n == 0){
            printf("NULL\n");
            continue;
        }

        if (n % 2 == 0)
            printf("EVEN ");
        else
            printf("ODD ");

        if (n < 0)
            printf("NEGATIVE\n");
        else
            printf("POSITIVE\n");
    }

    return 0;
}
