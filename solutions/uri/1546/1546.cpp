#include <iostream>

int
    main() {
    int n, d, f;

    std::cin >> n;

    while (n--) {
        std::cin >> d;

        while (d--) {
            std::cin >> f;

            if (f == 1) {
                std::cout << "Rolien" << std::endl;
            } else if (f == 2) {
                std::cout << "Naej" << std::endl;
            } else if (f == 3) {
                std::cout << "Elehcim" << std::endl;
            } else {
                std::cout << "Odranoel" << std::endl;
            }
        }
    }

    return 0;
}
