#include <cstdint>
#include <iostream>

int main() {
    std::int16_t chicken_meals, beef_meals, pasta_meals, chicken_orders,
        beef_orders, pasta_orders, result;

    while (std::cin >> chicken_meals >> beef_meals >> pasta_meals
           >> chicken_orders >> beef_orders >> pasta_orders) {
        result = (chicken_orders - chicken_meals >= 0)
            ? chicken_orders - chicken_meals
            : 0;
        result
            += (beef_orders - beef_meals >= 0) ? beef_orders - beef_meals : 0;
        result += (pasta_orders - pasta_meals >= 0) ? pasta_orders - pasta_meals
                                                    : 0;

        std::cout << result << std::endl;
    }

    return 0;
}
