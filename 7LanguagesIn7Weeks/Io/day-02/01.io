#!/usr/bin/env io

fiboLoop := method(n,
    if (n > 2) then ( 
        a := 1
        b := 1
        for (i, 1, n - 2, aux := a + b; a = b; b = aux)
        writeln(b)
    ) else (
        writeln(1)
    )
)

fiboLoop(6)
