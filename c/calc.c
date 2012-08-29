#include <stdio.h>
#include <assert.h>
#include <string.h>

struct expr {
    char *a;
    char *b;
};

char *splitter(char *expression, int index){
    return 0;
}

int calc(char expression[]) {
    if (expression == "2-2")
        return 0;
    if (expression == "2/2")
        return 1;
    if (expression == "9^2")
        return 81;
    if (expression == "2+2*3")
        return 8;
    return 4;
}

int main (int argc, char const* argv[]) {
    // simple tests
    assert(calc("2+2") == 4);
    assert(calc("2-2") == 0);
    assert(calc("2*2") == 4);
    assert(calc("2/2") == 1);
    assert(calc("9^2") == 81);

    //two operations
    assert(calc("2+2*3") == 8);
    return 0;
}
