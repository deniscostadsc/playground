#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bi_search(vector<int> v, int n){
    int begin = 0;
    int end = v.size() - 1;
    int middle = end / 2;

    while (begin < end){
        if (v.at(middle) < n){
            begin = middle + 1;
            middle = (end + begin) / 2;
        } else if (v.at(middle) > n || (middle > 0 && v.at(middle - 1) == n)){
            end = middle - 1;
            middle = (end + begin) / 2;
        } else {
            return middle + 1;
        }
    }

    if (v.at(middle) == n) return middle + 1;
    return -1;
}

int main(){
    int n, q, marble, query, position, c = 0;
    vector<int> marbles;

    while (cin >> n >> q && n != 0 && q != 0){
        marbles.clear();

        while (n--){
            cin >> marble;
            marbles.push_back(marble);
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << ++c << ":" << endl;

        while (q--){
            cin >> query;
            position = bi_search(marbles, query);
            if (position == -1) cout << query << " not found" << endl;
            else cout << query << " found at " << position << endl; 
        }   
    }
    return 0;
}
