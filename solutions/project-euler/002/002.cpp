#include <iostream>
#include <map>

std::map< int, int > previous_answers;

int
    fibonacci(int n) {
    if (previous_answers[n])
        return previous_answers[n];

    if (n <= 1) {
        previous_answers[n] = 1;
    } else {
        previous_answers[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }

    return previous_answers[n];
}

int
    main() {
    int n, i = 0, s = 0;

    while (true) {
        n = fibonacci(i);

        if (n >= 4000000)
            break;

        if (n % 2 == 0)
            s += n;

        i++;
    }

    std::cout << s << std::endl;

    return 0;
}
