#include <iostream>
#include <map>

int main() {
    int t, operations_count, i;
    std::string a, b;
    std::map< char, int > letter_index;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i <= 26; i++) {
        letter_index[alphabet[i]] = i;
    }

    std::cin >> t;

    while (t--) {
        operations_count = 0;
        std::cin >> a >> b;

        for (i = 0; i < static_cast< int >(a.length()); i++) {
            if (letter_index[a[i]] <= letter_index[b[i]]) {
                operations_count += letter_index[b[i]] - letter_index[a[i]];
            } else {
                operations_count
                    += 26 - letter_index[a[i]] + letter_index[b[i]];
            }
        }

        std::cout << operations_count << std::endl;
    }

    return 0;
}
