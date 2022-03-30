#include <cstdint>
#include <cstdio>

int main() {
    std::int32_t j, n, even_numbers[5], odd_numbers[5], even_index = 0,
                                                   odd_index = 0;
    std::int16_t check_even[5], check_odd[5];

    while (scanf("%d", &n) != EOF) {
        if (n % 2 == 0) {
            even_numbers[even_index] = n;
            check_even[even_index] = 1;
            even_index++;
        } else {
            odd_numbers[odd_index] = n;
            check_odd[odd_index] = 1;
            odd_index++;
        }

        if (even_index == 5) {
            for (j = 0; j <= 4; j++) {
                printf("par[%d] = %d\n", j, even_numbers[j]);
                check_even[j] = 0;
            }
            even_index = 0;
        }

        if (odd_index == 5) {
            for (j = 0; j <= 4; j++) {
                printf("impar[%d] = %d\n", j, odd_numbers[j]);
                check_odd[j] = 0;
            }
            odd_index = 0;
        }
    }

    for (j = 0; j <= 4; j++) {
        if (check_odd[j] == 0) {
            break;
        }
        printf("impar[%d] = %d\n", j, odd_numbers[j]);
    }

    for (j = 0; j <= 4; j++) {
        if (check_even[j] == 0) {
            break;
        }
        printf("par[%d] = %d\n", j, even_numbers[j]);
    }

    return 0;
}
