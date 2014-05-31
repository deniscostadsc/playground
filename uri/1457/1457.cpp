#include <cstdio>
#include <iostream>

using namespace std;

unsigned int n, k;

unsigned long long oracle(unsigned int f){
    int answer = n - (f * k);
    if (answer >= 1) return answer * oracle(f + 1);
    return 1;
}

int main(){
    unsigned int c;
    string k_str;

    cin >> c;

    while (c--){
        cin >> n;
        cin >> k_str;
        k = k_str.length();
        cout << oracle(0) << endl;
    }

    return 0;
}
