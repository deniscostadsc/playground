#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    unsigned int i, n;

    while (cin >> n && n != 0){
        vector<int> l;
        vector<int> r;
        for (i = 1; i <= n; i++) l.push_back(i);

        reverse(l.begin(), l.end());

        while (l.size() > 1){
            r.push_back(l.back());
            l.pop_back();
            l.insert(l.begin(), l.back());
            l.pop_back();
        }

        cout << "Discarded cards:";
        for (i = 0; i < r.size(); i++){
            if (i == 0) cout << " ";
            cout << r.at(i);
            if (i != r.size() - 1) cout << ", ";
        }
        cout << endl;

        cout << "Remaining card: ";
        for (i = 0; i < l.size(); i++) cout << l.at(i);
        cout << endl;
    }
    return 0;
}
