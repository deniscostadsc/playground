# Playground - A place to play programming.

[![CI](https://github.com/deniscostadsc/playground/actions/workflows/ci.yaml/badge.svg)](https://github.com/deniscostadsc/playground/actions/workflows/ci.yaml)

In this repository you'll see my solutions for programmin/security challange
sites like Project Euler, URI, SPOJ, OverTheWire and etc. Most of those
programming contest sites, use the same problem format for.

The following command are available:

```shell
make clean  # remove files created by run task
make format-code  # format all code
make languages  # show numbers of solutions in different languages per folder
make lint  # check lint for all solutions
make run  # run and test all past solutions (ignore solution with WRONG file)
make run FOLDER=sub/path/to/run  # run and test a specific sub-folder
make wrong  # show all solutions that are not complete yet
```

Commands above require **Docker** to work.
