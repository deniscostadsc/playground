#!/usr/bin/env io

//
// Write a program to add up all of the numbers in a two-dimensional
// array.
//

add := method(args,
    itemsPerLine := args size sqrt ceil
    lineNumber := (args size / itemsPerLine) ceil

    table := list()

    argsIndex := 0
    for (i, 1, lineNumber,
        line := list()

        if (itemsPerLine + argsIndex - 1 >= args size, argsLimit := args size - 1, argsLimit := itemsPerLine + argsIndex - 1)

        for (j, argsIndex, argsLimit,
            line push(args at(j))
        )

        argsIndex := j + 1
        table push(line)
    )

    table println
)

add(list(1, 2, 3, 4, 5, 6, 7, 8, 9))
