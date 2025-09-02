#include <iomanip>
#include <iostream>

int main() {
    int16_t h_degree, m_degree;

    while (std::cin >> h_degree >> m_degree) {
        std::cout << std::setfill('0') << std::setw(2) << h_degree / 30 << ":";
        std::cout << std::setfill('0') << std::setw(2) << m_degree / 6
                  << std::endl;
    }
    return 0;
}
