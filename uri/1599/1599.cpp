#include <iostream>

using namespace std;

int main(){
    int n, m, i, j;
    bool has_peak, has_any_peak;

    while (cin >> n >> m){
        int map[n][m];

        has_any_peak = false;

        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                cin >> map[i][j];
            }
        }

        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                has_peak = true;

                if (i - 1 >= 0 && map[i][j] <= map[i - 1][j])
                    has_peak = false;
                if (j - 1 >= 0 && map[i][j] <= map[i][j - 1])
                    has_peak = false;
                if (i - 1 >= 0 && j - 1 >= 0 && map[i][j] <= map[i - 1][j - 1])
                    has_peak = false;

                if (i + 1 < n && map[i][j] <= map[i + 1][j])
                    has_peak = false;
                if (j + 1 < m && map[i][j] <= map[i][j + 1])
                    has_peak = false;
                if (i + 1 < n && j + 1 < m && map[i][j] <= map[i + 1][j + 1])
                    has_peak = false;

                if (i + 1 < n && j - 1 >= 0 && map[i][j] <= map[i + 1][j - 1])
                    has_peak = false;
                if (i - 1 >= 0 && j + 1 < m && map[i][j] <= map[i - 1][j + 1])
                    has_peak = false;

                if (has_peak){
                    has_any_peak = true;
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }

        if (!has_any_peak) cout << -1 << endl;

        cout << endl;
    }
    return 0;
}
