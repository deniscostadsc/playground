#!/usr/bin/env io

//
// Bonus: Write a transpose method so that (new_matrix get(y, x)) ==
// matrix get(x, y) on the original list.
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

Table transpose := method(
    newTable := self clone
    newTable oldGet := newTable getSlot("get")
    newTable get := method(x, y,
        self oldGet(y, x)
    )
    newTable
)

myTable := Table clone

myTable dim(2, 2)

myTable set(0, 0, 6)
myTable set(1, 1, Table clone)
myTable set(0, 1, "non-empty string")
myTable set(1, 0, "another non-empty string")

myTable table println

newTable := myTable transpose

newTable table println

if (newTable get(0, 1) == myTable get(1, 0), writeln("passed"), writeln("failed"))
if (newTable get(1, 0) == myTable get(0, 1), writeln("passed"), writeln("failed"))
