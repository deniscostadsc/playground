#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string
conversor(string alien_number, string source_language, string target_language) {
    int number_value = 0, current_digit_index, i;
    int source_language_size = source_language.length();
    int target_language_size = target_language.length();
    string target_number = "";

    for (i = 0; i < static_cast<int>(alien_number.length()); i++) {
        current_digit_index =  source_language.find(
            alien_number[alien_number.length() - i - 1]);
        number_value += current_digit_index * pow(source_language_size, i);
    }

    while (number_value) {
        target_number = target_language[number_value % target_language_size] +
            target_number;
        number_value /= target_language_size;
    }

    return target_number;
}

int main() {
    int n, i;
    string alien_number, source_language, target_language;

    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> alien_number >> source_language >> target_language;
        cout << "Case #" << i << ": ";
        cout << conversor(alien_number, source_language, target_language);
        cout << endl;
    }
    return 0;
}
