#include <iostream>

using namespace std;

bool two(int number){
    return number % 2 == 0 || number != 2;
}

int main(){
    int n;

    cin >> n;

    if (two(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
