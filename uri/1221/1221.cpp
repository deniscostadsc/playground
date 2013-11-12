#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(unsigned long n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n == 3) return true;
    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;

    for (unsigned long i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n, p;

    cin >> n;
    while (n--){
        cin >> p;
        if (is_prime(p)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}
