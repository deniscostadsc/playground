#include <iostream>

using namespace std;

bool is_prime (int n){
    int i;
    if (n < 2) return false;
    if (n == 2) return true;
    if (n == 3) return true;
    if (n == 5) return true;
    if (n == 7) return true;
    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;
    if (n % 5 == 0) return false;
    if (n % 7 == 0) return false;

    for (i = 11; i < n / 2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int c = 0;
    unsigned long long int n = 1;
    while(n++){
        if (is_prime(n))
            c++;
        if (c == 10001){
            cout << n << endl;
            break;
        }
    }
    return 0;
}