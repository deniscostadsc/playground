#include <iostream>
#include <cstring>
#include <map>
 
using namespace std;

unsigned long long g[64];
unsigned long long k[64];
 
unsigned long long grains(int n){
    if (n == 1) return 2;
    return 2 * grains(n - 1);
}
 
int main(){
    int n;
    unsigned int x;

    memset(g, 0, sizeof(g));
    cin >> n;
    while(n--){
        cin >> x;
        if (x == 64)
            cout << "1537228672809129 kg" << endl;
        else
            cout << grains(x) / 12 / 1000 << " kg" << endl;
    }
    return 0;
}
