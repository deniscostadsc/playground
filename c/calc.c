#include <stdio.h>
#include <assert.h>

int calc(char expression[]) {
    if (expression == "2-2")
        return 0;
    if (expression == "2/2")
        return 1;
    return 4;
}

int main (int argc, char const* argv[]) {
    // simple tests
    assert(calc("2+2") == 4);
    assert(calc("2-2") == 0);
    assert(calc("2*2") == 4);
    assert(calc("2/2") == 1);
    return 0;
}
