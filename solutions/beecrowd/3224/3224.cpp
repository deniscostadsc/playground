#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string doctor_request, actual_ah;

    while (std::cin >> actual_ah) {
        std::cin >> doctor_request;

        if (doctor_request.length() > actual_ah.length()) {
            std::cout << "no" << "\n";
        } else {
            std::cout << "go" << "\n";
        }
    }

    return 0;
}
