#!/usr/bin/env io

//
// Write a program that gives you ten tries to guess a random number
// from 1–100. If you would like, give a hint of “hotter” or “colder”
// after the first guess.
//

attempts := 10
distance := nil
measurer := method(n, k, if((n - k) < 0, (n - k) * -1, (n - k)))
rand := Random value(1, 100) ceil

writeln("Choice a number between 1 and 100")

for(i, 1, attempts,
    guess := File standardInput readLine asNumber
    if (guess == rand) then (
        writeln("Yeahh, the number was " .. rand .. " 8D")
        break
    )

    if (distance != nil) then(
        if (distance > measurer(rand, guess),  writeln("Hotter!"), writeln("Colder!"))
    )

    distance = measurer(rand, guess)

    if(i == attempts, writeln("Game over! The number was " .. rand .. " 8("))
)
