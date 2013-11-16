#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a, b, c;
    vector<int> s;

    while (cin >> a >> b >> c && a != 0 && b != 0 && c != 0){
        s.clear();

        s.push_back(a);
        s.push_back(b);
        s.push_back(c);

        sort(s.begin(), s.end());

        a = s.at(0);
        b = s.at(1);
        c = s.at(2);

        if (sqrt(a * a + b * b) == c) cout << "right" << endl;
        else cout << "wrong" << endl;
    }

    return 0;
}
