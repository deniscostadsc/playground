#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    while (cin >> a >> b >> c){
        if (a == b && b == c)
            cout << "*" << endl;
        else if (b == c)
            cout << "A" << endl;
        else if (a == c)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }
    return 0;
}