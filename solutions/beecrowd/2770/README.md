https://judge.beecrowd.com/en/problems/view/2770

# Board Size

There is a traditional industry in Brazil that produces musical equipment.
Currently they are totally immersed with the era of Industry 4.0 and their main
action is the creation of pedals of effects for guitar, that there are in an
incredible diversity, each for a type of customer. This industry has implemented
a system in which his client creates his own pedal through a 3D prototype and
interactive, including with sounds, simulating the actual pedal. Therefore,
after the client generates his model, the same one is sent to the company, where
it will be manufactured.

To be fabricated, the pedal circuit is printed on a PCB(printed circuit board)
which has a certain size. But with the creativity of the customers, the plates
are taking unimaginable dimensions, this fact makes the plate available in the
company does not serve. Since you are an excellent programmer and music lover,
it is up to you to create a program in which given the dimensions of the client
circuit and the size of the board available, tell whether or not you can use
that board.

## Input

The first line of each test case consists of three integers $X, Y, M (M \leq
10^5)$ representing respectively the company board dimensions and the number of
requests. For each of the next $M$ lines will be provided two integers $X_i$ and
$Y_i$ representing the client's PCB dimensions.

Dimensions are guaranteed to be integer values greater than 0 and less or equal
than 64.

The input ends with EOF.

## Output

For each circuit determine whether it is possible to use the company's PCB or
not.
