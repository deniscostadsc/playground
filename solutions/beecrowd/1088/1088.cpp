#include <cstdint>
#include <iostream>

std::int32_t merge(
    std::int32_t numbers[],
    std::int32_t temp[],
    std::int32_t left,
    std::int32_t middle,
    std::int32_t right) {
    std::int32_t left_index = left, right_index = middle, temp_index = left,
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

    for (std::int32_t i = left; i <= right; i++) {
        numbers[i] = temp[i];
    }

    return swaps_count;
}

std::int32_t
    merge_sort(std::int32_t numbers[], std::int32_t temp[], std::int32_t left, std::int32_t right) {
    std::int32_t middle, swaps_count;

    if (left < right) {
        middle = left + (right - left) / 2;

        swaps_count = merge_sort(numbers, temp, left, middle);
        swaps_count += merge_sort(numbers, temp, middle + 1, right);
        swaps_count += merge(numbers, temp, left, middle + 1, right);
    }

    return swaps_count;
}

std::int32_t count_swaps(std::int32_t numbers[], std::int32_t n) {
    std::int32_t temp[n];

    return merge_sort(numbers, temp, 0, n - 1);
}

int main() {
    std::int32_t n, cur;

    while (std::cin >> n && n) {
        std::int32_t numbers[n];

        for (std::int32_t i = 0; i < n; i++) {
            std::cin >> cur;
            numbers[i] = cur;
        }

        std::cout << (count_swaps(numbers, n) % 2 == 0 ? "Carlos" : "Marcelo")
                  << std::endl;
    }

    return 0;
}
