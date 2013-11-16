#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <map>

using namespace std;

vector<unsigned long> primes;

bool is_prime(unsigned long n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

void next_prime(unsigned long n){
    while (!is_prime(++n));
    primes.push_back(n);
}

unsigned long div_count(unsigned long n){
    unsigned long count = 1;
    unsigned long i = 0;
    map<unsigned long, int> c;

    if (is_prime(n)) return 2;

    while (n > 1){
        if (n % primes.at(i) == 0){
            n /= primes.at(i);
            c[primes.at(i)]++;
        } else {
            if (primes.size() == i + 1) next_prime(primes.at(i));
            i++;
        }
    }

    for(map<unsigned long, int>::iterator iter = c.begin(); iter != c.end(); iter++){
        count *= iter->second + 1;
    }

    return count;
}

int main(){
    int t = 1, n = 1;

    while (true){
        int d = div_count(t);

        primes.push_back(2);

        if (d > 500){
            cout << t << endl;
            break;
        }
        t += ++n;
    }
    return 0;
}
