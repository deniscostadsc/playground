#include <cstdio>

using namespace std;

int main() {
    int c, n;

    scanf("%d", &c);
    
    while (c--) {
        scanf("%d", &n);

        if (n % 2 == 0) puts("0");
        else puts("1");
    }
    return 0;
}
