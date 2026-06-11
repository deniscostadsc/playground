#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int64_t t, x, y, max_coordinates, max_number, min_number;

    cin >> t;

    for (int64_t i = 0; i < t; i++) {
        cin >> x >> y;

        max_coordinates = max(x, y);

        min_number = (max_coordinates - 1) * (max_coordinates - 1) + 1;
        max_number = max_coordinates * max_coordinates;

        if (max_coordinates % 2 == 0) {
            if (y > x) {
                cout << min_number + (x - 1) << '\n';
            } else {
                cout << max_number - y + 1 << '\n';
            }
        } else {
            if (y > x) {
                cout << max_number - (x - 1) << '\n';
            } else {
                cout << min_number + (y - 1) << '\n';
            }
        }
    }

    return 0;
}
