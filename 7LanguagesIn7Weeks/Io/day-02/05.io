#!/usr/bin/env io

Table := Object clone

Table table := list(list())

Table dim := method(x, y,
    if (self table at(y) == nil,
        self table push(list())
        self dim(x, y)
    )

    if (self table at(y) size <= x,
        self table at(y) push(nil)
        self dim(x, y)
    )
)

Table set := method(x, y, value,
    self dim(x, y)

    self table at(y) atInsert(x, value)
    self table at(y) removeAt(x + 1)
)

Table get := method(x, y,
    self table at(y) at(x)
)

myTable := Table clone

myTable set(0, 0, 6)
myTable set(1, 1, Table clone)
myTable set(2, 2, "non-empty string")
myTable set(1, 2, "another non-empty string")

myTable get(2, 2) println
