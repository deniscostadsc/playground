#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, s, ss, c, h;
    unsigned i;
    char b;
    vector<char> bs;
    vector<int> hs;

    cin >> n;
    while (n--){
        cin >> s;
        ss = s;

        while (ss--){
            cin >> h;
            hs.push_back(h);
        }

        while (s--){
            cin >> b;
            bs.push_back(b);
        }

        c = 0;
        for (i = 0; i < hs.size(); i++){
            if (((hs.at(i) == 1 || hs.at(i) == 2) && bs.at(i) == 'S') || (hs.at(i) > 2 && bs.at(i) == 'J')) c++;
        }

        cout << c << endl;

        hs.clear();
        bs.clear();
    }
    return 0;
}
