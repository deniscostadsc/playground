#!/usr/bin/env io

Car := Object clone

Car drive := method(
    writeln("Vruum")
)

m := Car getSlot("drive")

m
