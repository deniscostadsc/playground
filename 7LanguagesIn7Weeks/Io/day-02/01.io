#!/usr/bin/env io

//
// A Fibonacci sequence starts with two 1s. Each subsequent number
// is the sum of the two numbers that came before: 1, 1, 2, 3,
// 5, 8, 13, 21, and so on. Write a program to find the nth Fibonacci
// number. fib(1) is 1, and fib(4) is 3. As a bonus, solve the problem
// with recursion and with loops.
//

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
