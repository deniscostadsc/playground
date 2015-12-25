#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<int> solutions;

int change(int m, set<int>::iterator it_a_begin,
           set<int>::iterator it_a_end, int n) {

    cout << *it_a_begin << endl;

    if (m < 0 || it_a_begin == it_a_end) return 0;
    if (m == 0) {
        solutions.push_back(n);
        return 1;
    }

    int r1 = change(m - *it_a_begin, it_a_begin, it_a_end, ++n);
    int r2 = change(m, ++it_a_begin, it_a_end, --n);

    return r1 + r2;
}

int main() {
    int t, n, m, z;
    set<int> a;
    
    cin >> t;

    while (t--) {
        cin >> n >> m;

        while (n--) {
            cin >> z;
            a.insert(z);
        }

        change(m, a.begin(), a.end(), 0);

        cout << *min_element(solutions.begin(), solutions.end()) << endl;

        a.clear();
        solutions.clear();
    }

    return 0;
}

//for (set<int>::iterator it = a.begin(); it != a.end(); it++) { cout << *it << endl; }
