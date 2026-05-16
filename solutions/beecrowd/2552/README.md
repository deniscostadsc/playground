https://judge.beecrowd.com/en/problems/view/2552

# CheeseBreadSweeper

The Nlogonian Aquatic Surf Championship, to be hosted in Bonita Horeleninha
(BH) city, is about to start! The game CheeseBreadSweeper is very popular in
this town!

The game board consists on a matrix with $N$ rows and $M$ columns. Each cell
contains a Cheese Bread or the number of Cheese Breads present in its adjacent
cells. A cell is adjacent to another if it is immediately on the left, the
right, above or bellow the cell. Please notice that, if a cell does not
contain a Bread Cheese, then it must have a number from 0 to 4, inclusive.

Given the positions of the Cheese Breads, determine the game board!

## Input

The input contains several test cases. The first line of each test case
contains integers $N$ and $M$ $(1 \leq N, M \leq 100)$. Next $N$ lines
contains $M$ integers each, separated by spaces, describing the Cheese Breads
on the board. The $j$-th integer in the $i$-th line is 1 if there is a Cheese
Bread at row $i$ and column $j$ of the board, or 0 otherwise.

The input ends with end-of-file (EOF).

## Output

For each test case, print $N$ lines with $M$ integers each, not separated by
spaces, describing the board’s configuration. If a cell contains a Cheese
Bread, print 9 for it; otherwise, print the number the cell must contain.
