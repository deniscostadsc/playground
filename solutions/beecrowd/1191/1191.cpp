#include <cstdint>
#include <iostream>
#include <string>

void postorder_print_from_preorder_inorder(std::string pre, std::string in) {
    std::int16_t in_root_index = in.find(pre[0]);

    if (in.substr(0, in_root_index).length() > 0) {
        postorder_print_from_preorder_inorder(
            pre.substr(1), in.substr(0, in_root_index));
    }
    if (in.substr(in_root_index + 1).length() > 0) {
        postorder_print_from_preorder_inorder(
            pre.substr(in_root_index + 1), in.substr(in_root_index + 1));
    }

    std::cout << pre[0];
}

int main() {
    std::string pre, in;

    while (std::cin >> pre >> in) {
        postorder_print_from_preorder_inorder(pre, in);
        std::cout << std::endl;
    }

    return 0;
}
