#include <iostream>

bool can_form_triangle(int a, int b, int c) {
    if (a > b + c) return false;
    if (b > a + c) return false;
    if (c > a + b) return false;
    return true;
}

int main() {
    int a, b, c, d;
    bool result;

    while(std::cin >> a >> b >> c >> d) {
        result = can_form_triangle(b, c, d);
        result |= can_form_triangle(a, c, d);
        result |= can_form_triangle(a, b, d);
        result |= can_form_triangle(a, b, c);

        std::cout << ((result) ? ("S") : ("N")) << std::endl;
    }

    return 0;
}
