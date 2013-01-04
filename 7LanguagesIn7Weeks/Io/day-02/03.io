#!/usr/bin/env io

add := method(args,
    table foreach(lineIndex, line, line foreach (celIndex, cel, cel println))
)

add(list(1, 2, 3, 4, 5, 6, 7, 8, 9))
