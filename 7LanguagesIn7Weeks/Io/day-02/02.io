#!/usr/bin/env io

//
// How would you change / to return 0 if the denominator is zero?
//

Number divide := Number getSlot("/")

Number / = method(n,
    if (n == 0, 0, self divide(n))
)

writeln(1 / 0)
writeln(999 / 0)