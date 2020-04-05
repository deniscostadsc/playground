# Playground - A place to play programming.

[
![Build Status](https://travis-ci.org/deniscostadsc/playground.svg?branch=master)
](https://travis-ci.org/deniscostadsc/playground)

In this repository I'll see my solutions for programmin/security challange
sites as Project Euler, URI, SPOJ, OverTheWire and etc. Most of those
programming contest sites, use the same format for problems and its
resolutions.

The following command are available:

```shell
make format-code  # format all code
make lint  # check lint for all solutions
make run  # run and test all past solutions
make run PROBLEM=path/to/the/problem  # run and test a specific solution
make wrong  # show all solutions that are not complete yet
```

Commands above require **Docker** to work.
