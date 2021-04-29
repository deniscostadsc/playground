#include <iostream>

int merge(int numbers[], int temp[], int left, int middle, int right) {
    int left_index = left, right_index = middle, temp_index = left,
        swaps_count = 0;

    while (left_index <= middle - 1 && right_index <= right) {
        if (numbers[left_index] <= numbers[right_index]) {
            temp[temp_index++] = numbers[left_index++];
        } else {
            temp[temp_index++] = numbers[right_index++];
            swaps_count += middle - left_index;
        }
    }

    while (left_index <= middle - 1) {
        temp[temp_index++] = numbers[left_index++];
    }

    while (right_index <= right) {
        temp[temp_index++] = numbers[right_index++];
    }

    for (int i = left; i <= right; i++) {
        numbers[i] = temp[i];
    }

    return swaps_count;
}

int merge_sort(int numbers[], int temp[], int left, int right) {
    int middle, swaps_count;

    if (left < right) {
        middle = left + (right - left) / 2;

        swaps_count = merge_sort(numbers, temp, left, middle);
        swaps_count += merge_sort(numbers, temp, middle + 1, right);
        swaps_count += merge(numbers, temp, left, middle + 1, right);
    }

    return swaps_count;
}

int count_swaps(int numbers[], int n) {
    int temp[n];
    return merge_sort(numbers, temp, 0, n - 1);
}

int main() {
    int n, cur;

    while (std::cin >> n && n) {
        int numbers[n];

        for (int i = 0; i < n; i++) {
            std::cin >> cur;
            numbers[i] = cur;
        }

        std::cout << (count_swaps(numbers, n) % 2 == 0 ? "Carlos" : "Marcelo")
                  << std::endl;
    }

    return 0;
}
