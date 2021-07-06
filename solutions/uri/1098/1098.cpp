#include <cmath>
#include <cstdint>
#include <cstdio>

int main() {
    int16_t i;

    for (i = 0; i <= 20; i += 2) {
        if (i == 0 || i == 10 || i == 20) {
            printf(
                "I=%.0f J=%.0f\n",
                static_cast< float >(i) / 10,
                static_cast< float >(i) / 10 + 1);
            printf(
                "I=%.0f J=%.0f\n",
                static_cast< float >(i) / 10,
                static_cast< float >(i) / 10 + 2);
            printf(
                "I=%.0f J=%.0f\n",
                static_cast< float >(i) / 10,
                static_cast< float >(i) / 10 + 3);
        } else {
            printf(
                "I=%.1f J=%.1f\n",
                static_cast< float >(i) / 10,
                static_cast< float >(i) / 10 + 1);
            printf(
                "I=%.1f J=%.1f\n",
                static_cast< float >(i) / 10,
                static_cast< float >(i) / 10 + 2);
            printf(
                "I=%.1f J=%.1f\n",
                static_cast< float >(i) / 10,
                static_cast< float >(i) / 10 + 3);
        }
    }

    return 0;
}
