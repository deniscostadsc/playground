#include <cstdint>
#include <iostream>
#include <vector>

int16_t find(std::vector< int16_t > v, int16_t n) {
    for (std::string::size_type i = 0; i < v.size(); i++) {
        if (n == v.at(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    bool valid;
    int16_t i, j, n, nn = 1;
    int16_t sudoku[9][9];
    std::vector< int16_t > line, column, square1, square2, square3;

    std::cin >> n;
    while (nn <= n) {
        valid = true;

        for (i = 0; i < 9; i++) {
            line.clear();
            for (j = 0; j < 9; j++) {
                std::cin >> sudoku[i][j];
                if (find(line, sudoku[i][j]) != -1) {
                    valid = false;
                }
                line.push_back(sudoku[i][j]);
            }
        }

        square1.clear();
        square2.clear();
        square3.clear();

        for (i = 0; i < 9; i++) {
            if (!valid) {
                break;
            }

            column.clear();
            for (j = 0; j < 9; j++) {
                if (find(column, sudoku[j][i]) != -1) {
                    valid = false;
                }
                column.push_back(sudoku[j][i]);
            }

            for (j = 0; j <= 2; j++) {
                if (find(square1, sudoku[i][j]) != -1) {
                    valid = false;
                }
                square1.push_back(sudoku[i][j]);
            }

            if (square1.size() == 9) {
                square1.clear();
            }

            for (j = 3; j <= 5; j++) {
                if (find(square2, sudoku[i][j]) != -1) {
                    valid = false;
                }
                square2.push_back(sudoku[i][j]);
            }

            if (square2.size() == 9) {
                square2.clear();
            }

            for (j = 6; j <= 8; j++) {
                if (find(square3, sudoku[i][j]) != -1) {
                    valid = false;
                }
                square3.push_back(sudoku[i][j]);
            }

            if (square3.size() == 9) {
                square3.clear();
            }
        }

        std::cout << "Instancia " << nn << std::endl;

        if (valid) {
            std::cout << "SIM" << std::endl;
        } else {
            std::cout << "NAO" << std::endl;
        }

        std::cout << std::endl;

        nn++;
    }

    return 0;
}
