https://www.urionlinejudge.com.br/judge/en/problems/view/1076

# Design Labirints

Peter loves to draw mazes, and recently he had an idea: Which would be the
minimum of pen movements needed to draw a maze, always begining and finishing
at the same position? To make the game more interesting, Peter decided that it
is not allowed to lift the pen from the paper. The templates for construction
of the maze are always square, 3 x 3, 4 x 4, 5 x 5 up to a maximum of 7 x 7.

For each example, Peter will specify where the drawing must start and your task
is to determine the amount of movements required to draw the Peter's maze.
Peter remembers that you do not have to worry about cycles, because there will
be no cycles in any of the test cases. However, a test case can have an input
4 1 and another input 1 4. This means two lines connecting these same two
nodes. Anyway it will make no difference in the drawing of the labyrinth
because the amount of movement should be the same.

See the examples below, In the maze(4 x 4), Peter want to begin in the node 0,
draw all lines and return to node 0. For this, the minimum of possible moves is
30. In the maze B (3 x 3), Pedro begin in the node 1, draw all lines and return
to node 1. In this case, he needs 10 movements to make this drawing.

## Input

The first input line contains an integer $T (T \lt 100)$ that represents the number
of test cases. Each test case begin with a line containing an integer
$N$ ($N < X^2$, where X is the size of the maze that can be from 3 up to 7). This $N$
is the node where the drawing must start and also finish. In the next input
line there are two informationsV and A that respectively represents the amount
of vertices and edges of the maze. Follow A lines, each one indicating a line
segment that Peter must plot to draw the desired maze.

## Output

The output should contain one integer for each test case. This number is the
amount of movement of pen that must be made to draw the desired maze,
considering that the start and end are always from the same point (node) that
can not lift the pen from the paper.
