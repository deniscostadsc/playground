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

Table writeToFile := method(fileName,
    file := File with(fileName)
    file remove
    file openForUpdating

    self table foreach(i, line,
        items := list()
        line foreach(j, item,
            if (item) then (
                items append(item)
            ) else (
                items append("")
            )
        )
        file write(items join(",") .. "\n")
    )
    file close 
)

Table readFromFile := method(fileName,
    file := File with(fileName)
    file openForReading
    lines := file readLines

    table := list()

    lines foreach(i, line,
        table append(line split(","))
    )
    file close
)

myTable := Table clone

myTable dim(2, 2)

myTable set(0, 0, 6)
myTable set(1, 1, -1)
myTable set(0, 1, 4)
myTable set(1, 0, 9)

myTable writeToFile("table.txt")
myTable readFromFile("table.txt")

writeln(myTable table)
