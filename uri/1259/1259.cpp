#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j){
    if (i % 2 == 0 && j % 2 == 1) return true;
    if (i % 2 == 1 && j % 2 == 0) return false;
    if (i % 2 == 0) return i < j;
    else return i > j;
}

int main(){
    int n, c;
    unsigned int i;
    vector<int> v;

    cin >> c;
    while(c--){
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end(), compare);

    for (i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }

    return 0;
}
