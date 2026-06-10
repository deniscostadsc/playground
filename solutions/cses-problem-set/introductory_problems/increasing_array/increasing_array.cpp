#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int32_t n, previous_value, value, moves;
    int64_t total_moves;

    while (cin >> n) {
        cin >> previous_value;
        total_moves = 0;

        for (int32_t i = 1; i < n; i++) {
            cin >> value;
            moves = 0;
            if (previous_value > value) {
                moves = previous_value - value;
                total_moves += moves;
            }
            previous_value = value + moves;
        }

        cout << total_moves << '\n';
    }

    return 0;
}
