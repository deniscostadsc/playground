#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

bool can_form_triangle(std::int16_t a, std::int16_t b, std::int16_t c) {
    if (a >= b + c) {
        return false;
    }
    if (b >= a + c) {
        return false;
    }
    if (c >= a + b) {
        return false;
    }
    return true;
}

std::string triangle_type(std::int16_t a, std::int16_t b, std::int16_t c) {
    if (a == b && b == c) {
        return "Equilatero";
    } else if (a == b || b == c || a == c) {
        return "Isoceles";
    } else {
        return "Escaleno";
    }
}

bool is_rectangle_triangle(std::int16_t a, std::int16_t b, std::int16_t c) {
    std::int16_t hypotenuse = std::max(std::max(a, b), c);
    std::int16_t cathetus1 = std::min(a, b);
    std::int16_t cathetus2 = std::min(b, c);

    return hypotenuse == sqrt(pow(cathetus1, 2) + pow(cathetus2, 2));
}

int main() {
    std::int16_t a, b, c;
    bool is_valid_triangle;

    while (std::cin >> a >> b >> c) {
        is_valid_triangle = can_form_triangle(a, b, c);

        if (!is_valid_triangle) {
            std::cout << "Invalido" << std::endl;
        } else {
            std::cout << "Valido-" << triangle_type(a, b, c) << std::endl;
            std::cout << "Retangulo: "
                      << (is_rectangle_triangle(a, b, c) ? "S" : "N")
                      << std::endl;
        }
    }

    return 0;
}
