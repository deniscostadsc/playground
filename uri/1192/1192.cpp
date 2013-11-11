#include <iostream>

using namespace std;

int main(){
    int n;
    string g;

    cin >> n;
    while (n--){
        cin >> g;
        if (g.at(0) == g.at(2)) cout << (g.at(0) - '0') * (g.at(2) - '0') << endl;
        else if (g.at(1) >= 65 && g.at(1) <= 90) cout << (g.at(2) - '0') - (g.at(0) - '0') << endl;
        else cout << (g.at(0) - '0') + (g.at(2) - '0') << endl;
    }

    return 0;
}
