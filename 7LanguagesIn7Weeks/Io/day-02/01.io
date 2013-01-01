#!/usr/bin/env io

Fibonacci := Object clone

Fibonacci loop := method(n,
    a := 0
    b := 1
    for (i, 1, n - 1,
        aux := a + b
        a = b
        b = aux
    )
    b
)


Fibonacci loop(8) println
