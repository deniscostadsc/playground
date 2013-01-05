#!/usr/bin/env io

//
// Write a prototype for a two-dimensional list. The dim(x, y) method
// should allocate a list of y lists that are x elements long. set(x, y,
// value) should set a value, and get(x, y) should return that value.
//

Table := Object clone

Table table := list()

Table dim := method(x, y,

    while (self table size < y,
        self table push(list())

        while (self table at(self table size - 1) size < x,
            self table at(self table size - 1) push(nil)
        )
    )
)

Table set := method(x, y, value,
    self table at(y) atInsert(x, value)
    self table at(y) removeAt(x + 1)
)

Table get := method(x, y,
    self table at(y) at(x)
)

myTable := Table clone

myTable dim(2, 2)

myTable set(0, 0, 6)
myTable set(1, 1, Table clone)
myTable set(0, 1, "non-empty string")
myTable set(1, 0, "another non-empty string")

myTable get(1, 1) println

myTable table println
