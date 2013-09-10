#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n = -1;
    float i;
    while (++n <= 99){
        cin >> i;
        if (i <= 10){
            cout << "A[" << n << "] = " << i << endl;
        }
    }
    return 0;
}
