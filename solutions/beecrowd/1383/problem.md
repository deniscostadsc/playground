http://www.beecrowd.com.br/judge/en/problems/view/1383

# Sudoku

The Sudoku puzzle spread quickly across the world, being the most popular
hobby in the planet today. Some people, however, fill the matrix incorrectly,
breaking the rules. Your task is to write a program that checks whether a
filled matrix is a solution to the puzzle or not.

The matrix is a 9 x 9 matrix of integers. To be considered a solution to the
puzzle, each row and each column must contain all integer numbers between 1
and 9. Also, if the matrix is partitioned in nine 3 x 3 sub-matrices (as shown
below), each one of them must also contain all numbers between 1 and 9. The
following matrix is an example of a solution to the puzzle.

## Input

Several instances are given. The first line of the input contains n > 0, the
number of matrices in the input. The following lines describe n matrices. Each
matrix is described by 9 lines. These lines contain 9 integers each.

## Output

For each instance, your program must print a line containing "Instancia k",
where k is the instance number. In the second line, your program must print
"SIM" (portuguese for yes) if the given matrix is a solution to the puzzle, or
"NAO" (portuguese for no) otherwise. Print an empty line after each instance.
