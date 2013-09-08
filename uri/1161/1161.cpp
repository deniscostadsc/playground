#include <cstdio>
#include <cstring>

long long int rfat[21];

long long int fat(long long int n){
    if (rfat[n] != 0)
        return rfat[n];
    if (n <= 1)
        rfat[n] = 1;
    else
        rfat[n] = n * fat(n - 1);
    return rfat[n];
}

int main(){
    long long int x, y;
    memset(rfat, 0, sizeof(rfat));
    while(scanf("%lld %lld", &x, &y) != EOF)
        printf("%lld\n", fat(x) + fat(y));
    return 0;
}
