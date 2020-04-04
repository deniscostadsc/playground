#include <iostream>
#include <string>

void post_from_pre_in(std::string pre, std::string in) {
    int in_root_index = in.find(pre[0]);

    if (in.substr(0, in_root_index).length() > 0) {
        post_from_pre_in(pre.substr(1), in.substr(0, in_root_index));
    }

    if (in.substr(in_root_index + 1).length() > 0) {
        post_from_pre_in(
            pre.substr(in_root_index + 1), in.substr(in_root_index + 1));
    }

    std::cout << pre[0];
}

int main() {
    int c, n;
    std::string pre, in;

    std::cin >> c;

    while (c--) {
        std::cin >> n >> pre >> in;
        post_from_pre_in(pre, in);
        std::cout << std::endl;
    }

    return 0;
}
