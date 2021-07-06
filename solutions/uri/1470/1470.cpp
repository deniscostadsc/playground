#include <algorithm>
#include <cstdint>
#include <iostream>

int64_t *fold(
    int64_t *tape,
    int16_t tape_size,
    int64_t *new_tape,
    int16_t new_tape_size,
    int16_t folding_index) {
    int16_t i, j, shift = 1;

    if (folding_index >= tape_size) {
        return tape;
    } else if (folding_index > tape_size / 2) {
        for (i = 0; i < tape_size; i++) {
            if (i > folding_index) {
                new_tape[i - shift] += tape[i];
                shift += 2;
            } else {
                new_tape[i] = tape[i];
            }
        }
    } else {
        j = 0;
        for (i = tape_size - 1; i >= 0; i--) {
            if (i < folding_index) {
                new_tape[j - shift] += tape[i];
                shift += 2;
            } else {
                new_tape[j] = tape[i];
            }
            j++;
        }
    }

    return new_tape;
}

bool check_folding(
    int64_t *input_tape,
    int16_t input_tape_size,
    int64_t *output_tape,
    int16_t output_tape_size) {
    bool all_equals = true;
    bool result;

    if (input_tape_size == output_tape_size) {
        for (int16_t i = 0; i < input_tape_size; i++) {
            all_equals &= input_tape[i] == output_tape[i];
        }
        if (all_equals) {
            return true;
        }
    }

    if (input_tape_size < output_tape_size) {
        return false;
    }

    for (int16_t folding_index = 1; folding_index < input_tape_size;
         folding_index++) {
        int16_t new_tape_size = std::max(
            input_tape_size - folding_index,
            input_tape_size - (input_tape_size - folding_index));
        int64_t new_tape[new_tape_size];

        fold(
            input_tape,
            input_tape_size,
            new_tape,
            new_tape_size,
            folding_index);

        result = check_folding(
            new_tape, new_tape_size, output_tape, output_tape_size);

        if (result) {
            return true;
            break;
        }
    }

    return false;
}

int main() {
    int16_t n, m;
    int16_t i, j;

    while (std::cin >> n) {
        int64_t input_tape[n];

        for (i = 0; i < n; i++) {
            std::cin >> input_tape[i];
        }

        std::cin >> m;
        int64_t output_tape[m];

        for (j = 0; j < m; j++) {
            std::cin >> output_tape[j];
        }

        std::cout << (check_folding(input_tape, n, output_tape, m) ? 'S' : 'N')
                  << std::endl;
    }

    return 0;
}
