#include <iostream>

using namespace std;

int main (){
    string money;
    int cents;
    int comma;

    while (cin >> money){
        cin >> cents;

        cout << "$";

        comma = money.size() % 3;
        for (size_t i = 0; i < money.size(); i++){
            if (comma == 0){
                comma = 3;
                if (i != 0) cout << ",";
            }
            cout << money.at(i);
            comma--;
        }

        cout << ".";
        if (cents < 10) cout << "0" << cents << endl;
        else cout << cents << endl;
    }
    return 0;
}
