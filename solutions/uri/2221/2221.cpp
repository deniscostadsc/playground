#include <iostream>

int
    calculate_value(int attack, int defense, int bonus, int level) {
    int result = (attack + defense) / 2;
    return result + (level % 2 == 0 ? bonus : 0);
}

int
    main() {
    int t, a, d, l, bonus, dabriels_value, guartes_value;

    std::cin >> t;

    while (t--) {
        std::cin >> bonus;
        std::cin >> a >> d >> l;
        dabriels_value = calculate_value(a, d, bonus, l);
        std::cin >> a >> d >> l;
        guartes_value = calculate_value(a, d, bonus, l);

        if (dabriels_value < guartes_value) {
            std::cout << "Guarte" << std::endl;
        } else if (guartes_value < dabriels_value) {
            std::cout << "Dabriel" << std::endl;
        } else {
            std::cout << "Empate" << std::endl;
        }
    }

    return 0;
}
