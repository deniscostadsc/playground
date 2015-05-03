#include <iostream>
#include <set>

using namespace std;

int main() {
    int t, n, m, z, count;
    set<int> a;
    set<int>::reverse_iterator ri;
    
    cin >> t;

    while (t--) {
        count = 0;
        cin >> n >> m;
        while (n--) {
            cin >> z;
            a.insert(z);
        }

        while (m) {
            for (ri = a.rbegin(); ri != a.rend(); ++ri) {
                if (m >= *ri){
                    count += m / *ri;
                    m -= *ri * (m / *ri);
                }
            }
        }
        
        a.clear();

        cout << count << '\n';
    }

    return 0;
}
