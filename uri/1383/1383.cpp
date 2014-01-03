#include <iostream>
#include <vector>

using namespace std;

int find(vector<int> v, int n){
    for (int i = 0; i < v.size(); i++){
        if (n == v.at(i)) return i;
    }
    return -1;
}

int main(){
    int i, j, n, nn = 1;
    int sudoku[9][9];
    vector<int> line, column, square1, square2, square3;
    bool valid;

    cin >> n;
    while (nn <= n){
        valid = true;

        for (i = 0; i < 9; i++){
            line.clear();
            for (j = 0; j < 9; j++){
                cin >> sudoku[i][j];
                if (find(line, sudoku[i][j]) != -1) valid = false;
                line.push_back(sudoku[i][j]);
            }
        }

        for (i = 0; i < 9; i++){
            column.clear();
            for (j = 0; j < 9; j++){
                if (find(column, sudoku[j][i]) != -1) valid = false;
                column.push_back(sudoku[j][i]);
            }

            for (j = 0; j <= 2; j++){
                if (find(square1, sudoku[i][j]) != -1) valid = false;
                square1.push_back(sudoku[i][j]);
            }

            if (square1.size() == 9) square1.clear();

            for (j = 3; j <= 5; j++){
                if (find(square2, sudoku[i][j]) != -1) valid = false;
                square2.push_back(sudoku[i][j]);
            }

            if (square2.size() == 9) square2.clear();

            for (j = 6; j <= 8; j++){
                if (find(square3, sudoku[i][j]) != -1) valid = false;
                square3.push_back(sudoku[i][j]);
            }

            if (square3.size() == 9) square3.clear();
        }

        cout << "Instancia " << nn << endl;

        if (valid) cout << "SIM" << endl;
        else cout << "NAO" << endl;

        cout << endl;

        nn++;
    }

    return 0;
}
