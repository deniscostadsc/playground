#include <iostream>

int main() {
    int c, x, y;

    std::cin >> c;

    for (int i = 0; i < c; i++) {
        std::cin >> x >> y;
        switch (x + y) {
            case 0:
                std::cout << "PROXYCITY" << std::endl;
                break;
            case 1:
                std::cout << "P.Y.N.G." << std::endl;
                break;
            case 2:
                std::cout << "DNSUEY!" << std::endl;
                break;
            case 3:
                std::cout << "SERVERS" << std::endl;
                break;
            case 4:
                std::cout << "HOST!" << std::endl;
                break;
            case 5:
                std::cout << "CRIPTONIZE" << std::endl;
                break;
            case 6:
                std::cout << "OFFLINE DAY" << std::endl;
                break;
            case 7:
                std::cout << "SALT" << std::endl;
                break;
            case 8:
                std::cout << "ANSWER!" << std::endl;
                break;
            case 9:
                std::cout << "RAR?" << std::endl;
                break;
            default:
                std::cout << "WIFI ANTENNAS" << std::endl;
                break;
        }
    }
    return 0;
}
