#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n < 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n, i = 0, s = 0;

    while (true){
        n = fibonacci(i);

        if (n >= 4000000) break;

        if (n % 2 == 0) s += n;

        i++;
    }

    cout << s << endl;

    return 0;
}
