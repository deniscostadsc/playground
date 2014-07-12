#include <iostream>

using namespace std;

int main (){
    int people;

    while (cin >> people){
        if (people) cout << "vai ter duas!" << endl;
        else cout << "vai ter copa!" << endl;
    }

    return 0;
}
