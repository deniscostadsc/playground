#include <iostream>
#include <cstring>
#include <map>
 
using namespace std;

unsigned long long grains(unsigned long long n){
    if (n == 1) return 2;
    return 2 * grains(n - 1);
}
 
int main(){
    int n;
    unsigned long long x;

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
