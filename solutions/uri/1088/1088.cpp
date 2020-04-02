#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>

void merge(std::vector<std::string> arr, int l, int m, int r) {
    int l_arr_size = m - l + 1;
    int r_arr_size = r - m;

    std::string l_arr[l_arr_size];
    std::string r_arr[r_arr_size];

    for (int i = 0; i < l_arr_size; i++) {
        l_arr[i] = arr[l + i];
    }
    for (int j = 0; j < r_arr_size; j++) {
        r_arr[j] = arr[m + j];
    }

    int l_arr_index = 0;
    int r_arr_index = 0;
    int arr_index = l;


    while (l_arr_index < l_arr_size && r_arr_index < l_arr_size) {
        if (l_arr[l_arr_index] <= r_arr[r_arr_index]) {
            arr[arr_index] = l_arr[l_arr_index];
            l_arr_index++;
        } else {
            arr[arr_index] = r_arr[r_arr_index];
            r_arr_index++;
        }
        arr_index++;
    }

    while (l_arr_index < l_arr_size) {
        arr[arr_index] = l_arr[l_arr_index];
        l_arr_index++;
        arr_index++;
    }

    while (r_arr_index < r_arr_size) {
        arr[arr_index] = r_arr[r_arr_index];
        r_arr_index++;
        arr_index++;
    }
}

void merge_sort(std::vector<std::string> arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, l);
        merge(arr, l, m, r);
    }
}

int main() {
    std::string line;
    std::vector<std::string>::iterator it;

    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        std::vector<std::string> numbers(
                std::istream_iterator<std::string>{iss},
                std::istream_iterator<std::string>());

        for (it = numbers.begin(); it != numbers.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        merge_sort(numbers, 0, numbers.size());

        for (it = numbers.begin(); it != numbers.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
