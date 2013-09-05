#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int c, n, m, im = 0, i = 0;
    cin >> c;
    cin >> n;
    m = n;
    while(c--){
        i++;
        cin >> n;
        if (n < m){
            im = i;
            m = n;
        }
    }
    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", im);
    return 0;
}
