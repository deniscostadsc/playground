#include <bits/stdc++.h>

using namespace std;

int32_t coins[100];

int32_t minimum_coins(int32_t coins[], int32_t n, int32_t z) {
    int32_t result[z + 1];

    result[0] = 0;
    fill(result + 1, result + z + 1, numeric_limits< int32_t >::max());

    for (int32_t j = 0; j < n; j++) {
        for (int32_t i = coins[j]; i <= z; i++) {
            if (result[i - coins[j]] != numeric_limits< int32_t >::max()) {
                result[i] = min(result[i], result[i - coins[j]] + 1);
            }
        }
    }

    if (result[z] == numeric_limits< int32_t >::max()) {
        return -1;
    } else {
        return result[z];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int32_t n, z;

    while (cin >> n >> z) {
        for (int32_t i = 0; i < n; i++) {
            cin >> coins[i];
        }

        cout << minimum_coins(coins, n, z) << '\n';
    }

    return 0;
}
