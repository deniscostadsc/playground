#include <cstdint>
#include <iostream>

int main() {
    int16_t n, i, j, board[4][4];
    bool left, right, up, down, none;

    std::cin >> n;

    while (n--) {
        left = false;
        right = false;
        up = false;
        down = false;
        none = false;
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                std::cin >> board[i][j];
            }
        }

        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                if (board[i][j] == 2048) {
                    none = true;
                }

                if (j - 1 >= 0) {
                    if (!board[i][j - 1] && board[i][j]) {
                        left = true;
                    }
                    if (board[i][j - 1] == board[i][j] && board[i][j]) {
                        left = true;
                        right = true;
                    }
                }

                if (j + 1 <= 3) {
                    if (!board[i][j + 1] && board[i][j]) {
                        right = true;
                    }
                }

                if (i - 1 >= 0) {
                    if (!board[i - 1][j] && board[i][j]) {
                        up = true;
                    }
                    if (board[i - 1][j] == board[i][j] && board[i][j]) {
                        up = true;
                        down = true;
                    }
                }

                if (i + 1 <= 3) {
                    if (!board[i + 1][j] && board[i][j]) {
                        down = true;
                    }
                }
            }
        }

        if (down && !none) {
            std::cout << "DOWN";
        }
        if (down && left && !none) {
            std::cout << " ";
        }
        if (left && !none) {
            std::cout << "LEFT";
        }
        if ((down || left) && right && !none) {
            std::cout << " ";
        }
        if (right && !none) {
            std::cout << "RIGHT";
        }
        if ((down || left || right) && up && !none) {
            std::cout << " ";
        }
        if (up && !none) {
            std::cout << "UP";
        }
        if ((!down && !up && !left && !right) || none) {
            std::cout << "NONE";
        }
        std::cout << std::endl;
    }
    return 0;
}
