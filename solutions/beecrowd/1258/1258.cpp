#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <vector>

struct order {
    std::string color;
    std::string size;
    std::string name;
};

std::map< std::string, int16_t > sizes_in_number;

bool comparator(order *o1, order *o2) {
    if (o1->color < o2->color) {
        return true;
    }
    if (o1->color > o2->color) {
        return false;
    }

    if (sizes_in_number[o1->size] < sizes_in_number[o2->size]) {
        return true;
    }
    if (sizes_in_number[o1->size] > sizes_in_number[o2->size]) {
        return false;
    }

    return o1->name < o2->name;
}

int main() {
    int16_t n;
    std::string name, color, size;
    std::vector< order * > orders;
    std::vector< order * >::iterator it_orders;
    bool print_newline = false;

    sizes_in_number["P"] = 0;
    sizes_in_number["M"] = 1;
    sizes_in_number["G"] = 2;

    while (std::cin >> n && n) {
        if (print_newline) {
            std::cout << std::endl;
        }

        print_newline = true;

        for (int16_t i = 0; i < n; i++) {
            getline(std::cin, name);
            getline(std::cin, name);
            std::cin >> color >> size;

            order *o = new order;
            o->color = color;
            o->size = size;
            o->name = name;

            orders.push_back(o);
        }

        std::sort(orders.begin(), orders.end(), comparator);

        for (it_orders = orders.begin(); it_orders != orders.end();
             it_orders++) {
            std::cout << (*it_orders)->color << " " << (*it_orders)->size << " "
                      << (*it_orders)->name << std::endl;
        }

        orders.clear();
    }

    return 0;
}
