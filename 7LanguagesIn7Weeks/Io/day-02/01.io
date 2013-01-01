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

Fibonacci recursive := method(n,
    if (n <= 2, 1, Fibonacci recursive(n - 1) + Fibonacci recursive(n - 2))
)

Fibonacci loop(8) println
Fibonacci recursive(8) println
