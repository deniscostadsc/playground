#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

int16_t operator_precedence(char term) {
    switch (term) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

bool is_operator(char term) {
    std::string operators = "+-*/^";

    return operators.find(term) != std::string::npos;
}

bool is_opening_parenthesis(char term) {
    return term == '(';
}

bool is_closing_parenthesis(char term) {
    return term == ')';
}

bool is_parenthesis(char term) {
    return is_opening_parenthesis(term) || is_closing_parenthesis(term);
}

bool is_operand(char term) {
    return !is_operator(term) && !is_parenthesis(term);
}

void print_postfix(std::string line) {
    std::vector< char > terms_stack;

    for (char &term : line) {
        if (is_opening_parenthesis(term)) {
            terms_stack.push_back(term);
        }

        if (is_closing_parenthesis(term)) {
            while (!terms_stack.empty()) {
                if (is_opening_parenthesis(terms_stack.back())) {
                    terms_stack.pop_back();
                    break;
                }

                std::cout << terms_stack.back();
                terms_stack.pop_back();
            }
        }

        if (is_operand(term)) {
            std::cout << term;
        }

        if (is_operator(term)) {
            if (!terms_stack.empty()
                && operator_precedence(term)
                    <= operator_precedence(terms_stack.back())) {
                std::cout << terms_stack.back();
                terms_stack.pop_back();

                while (!terms_stack.empty()
                       && operator_precedence(term)
                           <= operator_precedence(terms_stack.back())) {
                    std::cout << terms_stack.back();
                    terms_stack.pop_back();
                }

                terms_stack.push_back(term);
            } else {
                terms_stack.push_back(term);
            }
        }
    }

    while (!terms_stack.empty()) {
        if (is_parenthesis(terms_stack.back())) {
            terms_stack.pop_back();
        }

        std::cout << terms_stack.back();
        terms_stack.pop_back();
    }

    std::cout << std::endl;
}

int main() {
    std::int16_t n;
    std::string line;

    std::cin >> n;
    std::cin.ignore();

    for (int16_t nn = 0; nn < n; nn++) {
        getline(std::cin, line);
        print_postfix(line);
    }
    return 0;
}
