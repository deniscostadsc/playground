#include <iostream>

using namespace std;

int main() {
    int n, i, j, board[4][4];
    bool left, right, up, down, none;

    cin >> n;

    while (n--){
        left = false; right = false; up = false; down = false; none = false;
        for (i = 0; i <= 3; i++){
            for (j = 0; j <= 3; j++){
                cin >> board[i][j];
            }
        }

        for (i = 0; i <= 3; i++){
            for (j = 0; j <= 3; j++){
                if (board[i][j] == 2048) none = true;

                if (j - 1 >= 0){
                    if (!board[i][j - 1] && board[i][j]) left = true;
                    if (board[i][j - 1] == board[i][j] && board[i][j]){
                        left = true;
                        right = true;
                    }
                }

                if (j + 1 <= 3){
                    if (!board[i][j + 1] && board[i][j]) right = true;
                }

                if (i - 1 >= 0){
                    if (!board[i - 1][j] && board[i][j]) up = true;
                    if (board[i - 1][j] ==  board[i][j] && board[i][j]){
                        up = true;
                        down = true;
                    }
                }

                if (i + 1 <= 3){
                    if (!board[i + 1][j] && board[i][j]) down = true;
                }
            }
        }

        if (down && !none) cout << "DOWN";
        if (down && left && !none) cout << " ";
        if (left && !none) cout << "LEFT";
        if ((down || left) && right && !none) cout << " ";
        if (right && !none) cout << "RIGHT";
        if ((down || left || right) && up && !none) cout << " ";
        if (up && !none) cout << "UP";
        if ((!down && !up && !left && !right) || none) cout << "NONE";
        cout << endl;
    }
    return 0;
}
