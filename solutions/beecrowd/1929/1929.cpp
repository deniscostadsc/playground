#include <cstdint>
#include <iostream>

bool can_form_triangle(int16_t a, int16_t b, int16_t c) {
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

int main() {
    int16_t a, b, c, d;
    bool result;

    while (std::cin >> a >> b >> c >> d) {
        result = can_form_triangle(b, c, d);
        result |= can_form_triangle(a, c, d);
        result |= can_form_triangle(a, b, d);
        result |= can_form_triangle(a, b, c);

        std::cout << ((result) ? ("S") : ("N")) << std::endl;
    }

    return 0;
}
