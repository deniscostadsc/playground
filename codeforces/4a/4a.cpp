#include <iostream>

using namespace std;

bool two(int number){
    int i;

    if (number % 2 != 0)
        return false;
    for (i = 2; i < number;  i += 2){
        if ((number - i) % 2 == 0)
            return true;
    }
    return false;
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
