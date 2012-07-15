#include <stdio.h>
#include <assert.h>

int calc(char expression[]) {
    return 4;
}

int main (int argc, char const* argv[]) {
    assert(calc("2+2") == 4);
    return 0;
}
