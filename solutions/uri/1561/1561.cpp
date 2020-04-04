#include <iostream>
#include <string>

std::string
    dec2bin(int n) {
    if (n == 0)
        return "0";
    if (n == 1)
        return "1";

    if (n % 2 == 0)
        return dec2bin(n / 2) + "0";
    return dec2bin(n / 2) + "1";
}

int
    main() {
    int i, h, m, h_binary_length, m_binary_length;
    char c;
    std::string h_binary, m_binary;

    while (std::cin >> h >> c >> m) {
        h_binary = dec2bin(h);
        m_binary = dec2bin(m);
        h_binary_length = h_binary.length();
        m_binary_length = m_binary.length();

        std::cout << " ____________________________________________";
        std::cout << std::endl;
        std::cout << "|                                            |";
        std::cout << std::endl;
        std::cout << "|    ____________________________________    |_";
        std::cout << std::endl;
        std::cout << "|   |                                    |   |_)";
        std::cout << std::endl;
        std::cout << "|   |   8         4         2         1  |   |";
        std::cout << std::endl;
        std::cout << "|   |                                    |   |";
        std::cout << std::endl;
        std::cout << "|   |   ";

        int k = 0;
        for (i = 3; i >= 0; i--) {
            if (h_binary_length - 1 >= i) {
                if (h_binary[k] == '1') {
                    std::cout << "o";
                } else {
                    std::cout << " ";
                }
                k++;
            } else {
                std::cout << " ";
            }
            if (i != 0)
                std::cout << "         ";
        }

        std::cout << "  |   |" << std::endl;
        std::cout << "|   |                                    |   |";
        std::cout << std::endl;
        std::cout << "|   |                                    |   |";
        std::cout << std::endl;
        std::cout << "|   |   ";

        k = 0;
        for (i = 5; i >= 0; i--) {
            if (m_binary_length - 1 >= i) {
                if (m_binary[k] == '1') {
                    std::cout << "o";
                } else {
                    std::cout << " ";
                }
                k++;
            } else {
                std::cout << " ";
            }
            if (i != 0)
                std::cout << "     ";
        }

        std::cout << "  |   |" << std::endl;
        std::cout << "|   |                                    |   |";
        std::cout << std::endl;
        std::cout << "|   |   32    16    8     4     2     1  |   |_";
        std::cout << std::endl;
        std::cout << "|   |____________________________________|   |_)";
        std::cout << std::endl;
        std::cout << "|                                            |";
        std::cout << std::endl;
        std::cout << "|____________________________________________|";
        std::cout << std::endl << std::endl;
    }

    return 0;
}
