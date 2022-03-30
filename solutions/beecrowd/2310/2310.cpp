#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::int16_t n;
    double s, b, a, service_attempt, service_successful, block_attempt,
        block_successful, attack_attempt, attack_successful;
    std::string name;

    service_attempt = 0;
    service_successful = 0;
    block_attempt = 0;
    block_successful = 0;
    attack_attempt = 0;
    attack_successful = 0;

    std::cin >> n;

    while (n--) {
        std::cin >> name;
        std::cin >> s >> b >> a;

        service_attempt += s;
        block_attempt += b;
        attack_attempt += a;

        std::cin >> s >> b >> a;

        service_successful += s;
        block_successful += b;
        attack_successful += a;
    }

    std::cout << std::fixed << std::setprecision(2) << "Pontos de Saque: "
              << (service_successful / service_attempt) * 100 << " %."
              << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Pontos de Bloqueio: "
              << (block_successful / block_attempt) * 100 << " %." << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Pontos de Ataque: "
              << (attack_successful / attack_attempt) * 100 << " %."
              << std::endl;

    return 0;
}
