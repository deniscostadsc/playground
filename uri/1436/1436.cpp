#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int c, n, l, j;
    vector<int> p;

    cin >> n;
    c = 0;
    while (++c <= n){
        p.clear();
        cin >> l;
        while (l--){
            cin >> j;
            p.push_back(j);
        }
        sort(p.begin(), p.end());
        cout << "Case " << c << ": " << p.at(p.size() / 2) << endl;
    }

    return 0;
}
