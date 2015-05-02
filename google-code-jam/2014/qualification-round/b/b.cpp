#include <cstdio>

int main(){
    int n, case_n = 0;
    double c, f, x, total_seconds, seconds, cookies, cookies_per_second;

    scanf("%d", &n);

    while (n--){
        scanf("%lf %lf %lf", &c, &f, &x);
        cookies_per_second = 2.0;
        total_seconds = 0.0;
        cookies = 0.0;

        printf("%f\n", c);
        printf("%f\n", c / cookies_per_second);

        printf("%f\n", x);
        printf("%f\n", x / cookies_per_second);

        printf("%f\n", x / (cookies_per_second + f));

        // while (cookies < x){
            // if (c / cookies_per_second){
                // ;
            // }

            // printf("c f x cookies_per_second: %f %f %f %f\n", c, f, x, cookies_per_second);

            // printf("c / cookies_per_second %f\n", c / cookies_per_second);
            // printf("seconds + x / (cookies_per_second + f) %f\n", seconds + x / (cookies_per_second + f));

            // if (c / cookies_per_second < seconds + x / (cookies_per_second + f) && cookies >= c){
            //     printf("1 +C: %f\n", c);
            //     printf("1 +Seconds: %f\n", seconds);

            //     seconds = c / cookies_per_second;

            //     printf("+Seconds: %f\n", seconds);

            //     total_seconds += seconds;
            //     cookies_per_second += f;
            //     cookies -= c;

            //     printf("+Cookies: %f\n", cookies);

            // } else {


            //     seconds =   x / cookies_per_second;

            //     printf("-Seconds: %f\n", seconds);

            //     cookies += seconds * cookies_per_second;

            //     printf("-Cookies: %f\n", cookies);

            //     total_seconds += seconds;
            //     // break;
            // }
        // }

        // printf("Case #%d: %f\n", ++case_n, total_seconds);

    }

    return 0;
}
