#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    int n[2001], x, i, j, c = 1;
    memset(n, 0, sizeof(n));
    cin >> j;
    while(j--){
        scanf("%d", &x);
        n[x]++;
        if (x > c)
            c = x;
    }
    for (i = 1; i <= c; i++){
        if (n[i] != 0){
            cout << i << " aparece " << n[i] << " vez(es)" << endl;
        }
    }
}