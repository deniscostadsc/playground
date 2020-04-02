#include <cstdio>

int main() {
    int n, case_n = 0;
    double c, f, x, total_seconds, seconds, cookies, cookies_per_second;

    scanf("%d", &n);

    while (n--) {
        scanf("%lf %lf %lf", &c, &f, &x);
        cookies_per_second = 2.0;
        total_seconds = 0.0;
        cookies = 0.0;

        while (cookies < x) {
            if (
                    c / cookies_per_second < seconds + x /
                    (cookies_per_second + f) && cookies >= c) {
                seconds = c / cookies_per_second;

                total_seconds += seconds;
                cookies_per_second += f;
                cookies -= c;
            } else {
                seconds =   x / cookies_per_second;
                cookies += seconds * cookies_per_second;
                total_seconds += seconds;
                break;
            }
        }

        printf("Case #%d: %f\n", ++case_n, total_seconds);
    }

    return 0;
}
