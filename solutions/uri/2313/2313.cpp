#include <algorithm>
#include <cmath>
#include <iostream>

bool can_form_triangle(int a, int b, int c) {
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

std::string triangle_type(int a, int b, int c) {
    if (a == b && b == c) {
        return "Equilatero";
    } else if (a == b || b == c || a == c) {
        return "Isoceles";
    } else {
        return "Escaleno";
    }
}

bool is_rectangle_triangle(int a, int b, int c) {
    int hypotenuse = std::max(std::max(a, b), c);
    int cathetus1 = std::min(a, b);
    int cathetus2 = std::min(b, c);

    return hypotenuse == sqrt(pow(cathetus1, 2) + pow(cathetus2, 2));
}

int main() {
    int a, b, c;
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
