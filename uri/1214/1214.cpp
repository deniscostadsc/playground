#include <iostream>
#include <vector>
#include <numeric>
#include <cstdio>

using namespace std;

int main(){
    int n, l;
    double c, g, avg;
    vector<double> gs;

    cin >> n;
    while (n--){
        gs.clear();
        c = 0.0;
        avg = 0;
        cin >> l;

        for (int i = 0; i < l; ++i){
            cin >> g;
            gs.push_back(g);
        }

        avg += accumulate(gs.begin(), gs.end(), 0) / gs.size();

        for (int i = 0; i < l; ++i){
            if (gs.at(i) > avg) c++;
        }

        printf("%.3f%\n", c / gs.size() * 100);
    }
    return 0;
}
