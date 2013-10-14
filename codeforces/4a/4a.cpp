#include <iostream>

using namespace std;

bool two(int number){
    if (number % 2 != 0 || number == 2)
        return false;
    return true;
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
