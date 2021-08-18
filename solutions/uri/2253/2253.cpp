#include <cstdint>
#include <iostream>

bool is_password_valid(std::string password) {
    if (!(password.size() >= 6 && password.size() <= 32)) {
        return false;
    }

    std::string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
    std::string numbers = "0123456789";
    std::size_t found;
    bool has_uppercase = false, has_lowercase = false, has_number = false,
         is_valid_char;

    for (int16_t i = 0; i < password.size(); i++) {
        is_valid_char = false;

        found = uppercase_letters.find(password[i]);
        if (found != std::string::npos) {
            has_uppercase = true;
            is_valid_char = true;
        }

        found = lowercase_letters.find(password[i]);
        if (found != std::string::npos) {
            has_lowercase = true;
            is_valid_char = true;
        }

        found = numbers.find(password[i]);
        if (found != std::string::npos) {
            has_number = true;
            is_valid_char = true;
        }

        if (!is_valid_char) {
            return false;
        }
    }

    return has_uppercase && has_lowercase;
}

int main() {
    std::string password;

    while (std::getline(std::cin, password)) {
        std::cout
            << (is_password_valid(password) ? "Senha valida."
                                            : "Senha invalida.")
            << std::endl;
    }

    return 0;
}
