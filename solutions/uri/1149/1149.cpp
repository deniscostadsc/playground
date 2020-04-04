#include <iostream>

int
    main() {
    int a, b, s;

    std::cin >> a;
    s = a;
    std::cin >> b;

    while (b <= 0)
        std::cin >> b;
    for (int i = 1; i < b; i++)
        s += ++a;

    std::cout << s << std::endl;
    return 0;
}
