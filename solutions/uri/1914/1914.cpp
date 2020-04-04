#include <iostream>
#include <string>

int main() {
    int qt;
    long first_number, second_number;
    bool is_even, first_won;
    std::string first_player, first_choice, second_player, second_choice;

    std::cin >> qt;

    while (qt--) {
        std::cin >> first_player >> first_choice >> second_player
            >> second_choice;
        std::cin >> first_number >> second_number;

        is_even = (first_number + second_number) % 2 == 0;
        first_won
            = ((is_even && first_choice == "PAR")
               || (!is_even && first_choice == "IMPAR"));

        std::cout << (first_won ? first_player : second_player) << std::endl;
    }
    return 0;
}
