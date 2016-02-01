#include <iostream>
#include <cstdio>

int **create_grid(int r, int c, int m, int **missing) {
    /*

    x.x.x.x.x
     x...x.x
    x.x.x.x.x

    will become...

    [[1, 1, 1, 1, 1],
     [1, 0, 1, 1, -1],
     [1, 1, 1, 1, 1]]

    */

    int i, j;
    int **grid = new int*[r];

    for (i = 0; i < r; i++) {
        grid[i] = new int[c];

        for (j = 0; j < c; j++) {
            grid[i][j] = 1;
        }

        if (r % 2 == 1) {
            grid[i][r - 1] = -1;
        }
    }

    for (i = 0; i < m; i++) {
        grid[missing[i][0]][missing[i][1]] = 0;
    }

    return grid;
}

void where_to_drop(int k, int r, int c, int **grid) {
    int i, j;
    double probability[c];

    for (i = 0; i < c; i++) {
        probability[i] = 1.0;
    }

    if (grid[r - 1][k] == 1 && grid[r - 1][k - 1] == 1) {
        probability[k] *= 0.5;
        probability[k - 1] *= 0.5;
    } else if (grid[r - 1][k] == 1) {
        probability[k] *= 1.0;
    } else if (grid[r - 1][k - 1] == 1) {
        probability[k - 1] *= 1.0;
    } else {
        puts("xxx");
        return void();
    }

    for (i = r - 1 ; i > 0; i--) {
        for (j = 0; j > c; j--) {
            if (i % 2 == 0) {
                if (grid[i - 1][k] == 1 && grid[i - 1][k - 1] == 1) {
                    probability[k] *= 0.5;
                    probability[k - 1] *= 0.5;
                } else if (grid[i - 1][k] == 1) {
                    probability[k] *= 1.0;
                } else if (grid[i - 1][k - 1] == 1) {
                    probability[k - 1] *= 1.0;
                } else {
                    puts("xxx");
                    return void();
                }
            } else {
                if (grid[i - 1][k] == 1 && grid[i - 1][k + 1] == 1) {
                    probability[k] *= 0.5;
                    probability[k + 1] *= 0.5;
                } else if (grid[i - 1][k] == 1) {
                    probability[k] *= 1.0;
                } else if (grid[i - 1][k + 1] == 1) {
                    probability[k + 1] *= 1.0;
                } else {
                    puts("xxx");
                    return void();
                }
            }
        }
    }

    for (i = r - 1 ; i > 0; i--) {
        std::cout << probability[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n, r, c, k, m, ri, ci, i, j;
    int **grid;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> r >> c >> k >> m;

        int **missing = new int*[m];

        for (j = 0; j < m; j++) {
            missing[j] = new int[2];

            std::cin >> ri >> ci;
            missing[j][0] = ri;
            missing[j][1] = ci;
        }

        grid = create_grid(r, c, m, missing);
        where_to_drop(k, r, c, grid);
    }

    return 0;
}
