#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int64_t n, value, best, sum;

    while (cin >> n) {
        cin >> value;
        best = value, sum = value;
        for (int32_t i = 1; i < n; i++) {
            cin >> value;
            sum = max(value, sum + value);
            best = max(best, sum);
        }

        cout << best << '\n';
    }

    return 0;
}
