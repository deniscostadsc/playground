#include <cstdio>

using namespace std;

int main() {
    int c, n, i, sum;

    scanf("%d", &c);
    
    while (c--) {
        sum = 0;
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            if (i % 2 == 0) sum++;
            else sum--;
        }
        
        printf("%d\n", sum);
    }
    return 0;
}
