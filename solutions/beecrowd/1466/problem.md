https://judge.beecrowd.com/en/problems/view/1466

# Level Order Tree Traversal

Level order traversal of a tree is breadth first traversal for the tree. It is
actually a BFS, which is not recursive by nature. It uses Queue instead of Stack
to hold the next vertices that should be opened. The reason for it is in this
traversal, you want to open the nodes in a FIFO order, instead of a LIFO order,
obtained by recursion.

So the work here is, after some operations of insertion over a binary search
tree, print the level order traversal of this tree. For example, an input with
the sequence of numbers: 8 3 10 14 6 4 13 7 1 will result in the following tree:

With the level order traversal output: 8 3 10 1 6 14 4 7 13.

## Input

The input file contains many test cases. The first line of input contains an
integer $C (C \leq 1000)$, indicating the number of test cases that follow. Each
test case contains two lines. The first line contains a number $N (1 \leq N \leq
500)$ indicating the amount of numbers that will form each one of the trees. The
second line contains the $N$ distinct non-negative numbers, each one separated
by a space.

## Output

For each input set, you should print the message "Case n:", where n is the
sequential test case number, followed by one line with the level order traversal
of the tree, according to the given example.

Note: None space must be printed after the last number of each line and the
program should print a blank line after each test case, even after the last test
case. The result tree will have no repeated numbers and no more than 500 levels.
