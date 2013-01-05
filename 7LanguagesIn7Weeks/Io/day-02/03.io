#!/usr/bin/env io

add := method(args,
    itemsPerLine := args size sqrt ceil
    lineNumber := (args size / itemsPerLine) ceil

    table := list()

    argsIndex := 0
    for (i, 1, lineNumber,
        line := list()

        for (j, argsIndex, itemsPerLine + argsIndex - 1,
            line push(args at(j))
        )

        argsIndex := j + 1
        table push(line)
    )

    table println
)

add(list(1, 2, 3, 4, 5, 6, 7, 8, 9))
