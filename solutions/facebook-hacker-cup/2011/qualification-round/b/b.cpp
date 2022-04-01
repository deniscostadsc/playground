#include <cstdio>
#include <iostream>

std::int16_t **create_grid(
    std::int16_t r, std::int16_t c, std::int16_t m, std::int16_t **missing) {
    std::int16_t i, j;
    std::int16_t **grid = new std::int16_t *[r];

    for (i = 0; i < r; i++) {
        if (i % 2 == 1) {
            grid[i] = new std::int16_t[c - 1];
            for (j = 0; j < c - 1; j++) {
                grid[i][j] = 1;
            }
        } else {
            grid[i] = new std::int16_t[c];
            for (j = 0; j < c; j++) {
                grid[i][j] = 1;
            }
        }
    }

    for (i = 0; i < m; i++) {
        grid[missing[i][0]][missing[i][1]] = 0;
    }

    /*
     * to print matrix as it is in final */

    /*
    for (i = 0; i < r; i++) {
        if (i % 2 == 1) {
            std::cout << " ";
            for (j = 0; j < c - 1; j++) {
                std::cout << grid[i][j] << " ";
            }
        } else {
            for (j = 0; j < c; j++) {
                std::cout << grid[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
    */

    std::cout << std::endl << std::endl;

    return grid;
}

void calculate_probability(
    std::int16_t i,
    std::int16_t j,
    std::int16_t r,
    std::int16_t c,
    std::int16_t k,
    std::int16_t **grid,
    double probability) {
    if (i == r - 1 && j == k) {
        std::cout << probability << std::endl;
    }
    if (i == r - 1) {
        return void();
    }

    if (i % 2 == 0) {
        if (grid[i + 1][j - 1] && grid[i + 1][j]) {
            calculate_probability(
                i + 1, j - 1, r, c, k, grid, probability * 0.5);
            calculate_probability(i + 1, j, r, c, k, grid, probability * 0.5);
        } else if (grid[i + 1][j - 1]) {
            calculate_probability(i + 1, j - 1, r, c, k, grid, probability);
        } else {
            calculate_probability(i + 1, j, r, c, k, grid, probability);
        }
    } else {
        if (grid[i + 1][j] && grid[i + 1][j + 1]) {
            calculate_probability(i + 1, j, r, c, k, grid, probability * 0.5);
            calculate_probability(
                i + 1, j + 1, r, c, k, grid, probability * 0.5);
        } else if (grid[i + 1][j]) {
            calculate_probability(i + 1, j, r, c, k, grid, probability);
        } else {
            calculate_probability(i + 1, j + 1, r, c, k, grid, probability);
        }
    }
}

void where_to_drop(
    std::int16_t r, std::int16_t c, std::int16_t k, std::int16_t **grid) {
    std::int16_t j;

    for (j = 0; j < c; j++) {
        calculate_probability(0, j, r, c, k, grid, 1.0);
    }
}

int main() {
    std::int16_t n, r, c, k, m, ri, ci, i, j;
    std::int16_t **grid;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> r >> c >> k >> m;

        std::int16_t **missing = new std::int16_t *[m];

        for (j = 0; j < m; j++) {
            missing[j] = new std::int16_t[2];

            std::cin >> ri >> ci;
            missing[j][0] = ri;
            missing[j][1] = ci;
        }

        grid = create_grid(r, c, m, missing);
        where_to_drop(r, c, k, grid);

        std::cout << std::endl << std::endl;
    }

    return 0;
}
