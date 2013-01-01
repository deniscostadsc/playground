#!/usr/bin/env io

Fibonacci := Object clone

Fibonacci loop := method(n,
    a := 1
    b := 1
    if (n > 2) then ( 
        for (i, 1, n - 2,
            aux := a + b
            a = b
            b = aux
        )
    )
    b
)

Fibonacci loop2 := method(n,
    a := 0
    b := 1
    aux := 1
    for (i, 1, n - 1,
        aux := a + b
        a = b
        b = aux
    )
    b
)


Fibonacci loop(8) println
Fibonacci loop2(8) println
