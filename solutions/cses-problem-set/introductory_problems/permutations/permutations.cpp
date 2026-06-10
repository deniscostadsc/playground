#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int32_t n;

    while (cin >> n) {
        if (n == 1) {
            cout << "1\n";
        } else if (n == 2 || n == 3) {
            cout << "NO SOLUTION\n";
        } else {
            for (int32_t i = 2; i <= n; i += 2) {
                if (i != 2) {
                    cout << " ";
                }
                cout << i;
            }

            for (int32_t i = 1; i <= n; i += 2) {
                cout << " " << i;
            }

            cout << '\n';
        }
    }

    return 0;
}
