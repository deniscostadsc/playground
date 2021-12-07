https://www.beecrowd.com.br/judge/en/problems/view/1100

# Knight Moves

Peter is doing a research on the Traveling Knight Problem (TKP) where you have
to find the shortest closed tour of knight moves that visits each square of a
given set of n squares on a chessboard exactly once. He thinks that the most
difficult part of the problem is determining the smallest number of knight
moves between two given squares and that, once you have accomplished this,
finding the tour would be easy.

Of course you know that it is vice versa. So you must offer him a program that
solves the "difficult" part.

Your job is to write a program that takes two squares a and b as input and then
determines the number of knight moves on a shortest route from a to b.

## Input

The input file will contain one or more test cases. Each test case consists of
one line containing two squares separated by one space. A square is a string
consisting of a letter (a-h) representing the column and a digit (1-8)
representing the row on the chessboard. See the figure above.

## Output

For each test case, print one line saying "To get from xx to yy takes n knight
moves.".
