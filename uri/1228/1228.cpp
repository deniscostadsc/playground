#include <iostream>
#include <vector>

using namespace std;

int find(vector<int> v, int n){
    for (int i = 0; i < v.size(); i++){
        if (n == v.at(i)) return i;
    }
    return -1;
}

int main(){
    int i, j, n, p, overtakes;
    vector<int> start;
    vector<int> finish;

    while (cin >> n){
        start.clear();
        finish.clear();
        overtakes = 0;

        for (i = 0; i < n; i++){
            cin >> p;
            start.push_back(p);
        }

        for (i = 0; i < n; i++){
            cin >> p;
            finish.push_back(p);
        }

        for (i = 0; i < n; i++){
            for (j = 0; j < find(start, finish[i]); j++){
                if (find(finish, start.at(j)) > i) overtakes++;
            }
        }
        cout << overtakes << endl;
    }

    return 0;
}
