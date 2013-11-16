#include <iostream>

using namespace std;

int main(){
    int n, s, d, l, g;

    cin >> n;
    while (n--){
        cin >> s >> d;
        l = (s - d) / 2;
        g = s - l;
        if (l + g == s && g - l == d && l >= 0 && g >= 0){
            cout << g << " " << l << endl;
        } else cout << "impossible" << endl;
    }

    return 0;
}
