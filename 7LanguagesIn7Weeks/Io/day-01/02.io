#!/usr/bin/env io

//
// Execute the code in a slot given its name.
//

Car := Object clone

Car drive := method(
    writeln("Vruum")
)

m := Car getSlot("drive")

m
