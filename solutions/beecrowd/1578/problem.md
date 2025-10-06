https://judge.beecrowd.com/en/problems/view/1578

# Matrix of Squares

Atrapalhilton is a student very dedicated, though very, very clumsky. Last week,
his Math teacher, Mr. Sabetudilton, recommended the class a list of exercises
about matrices. Atrapalhilton, diligent as he is, decided to make the exercises
at the very same day, as soon he arrived home, though only after watching the
evening episode of The Striped Little Hen, his favorite TV show. In the
statement of one of the exercises it could be read:

- Calculate the square of each one of the matrices below…

However, Atrpalhilton made a huge mass. For him, the square of a square matrix A
is the matrix of the squares of the values of matrix A. For example, the square
of matrix

| | |
|-|-|
|1|3|
|5|7|

is not for him,

| | |
|-|-|
|16|24|
|40|64|

but

| | |
|-|-|
|1|9|
|25|49|

Atrapalhilton got to calculate the “square” of the first, the second and the
third matrices and realised that it was already too late, that he wouldn't be
able to finish calculating the “squares” of all $N$ matrices of the list. Hence,
he decided to write a program which would do the job for him.

## Input

The first line of the input consists of a single positive integer $N (N \leq
100)$, which stands for the number of matrices whose “squares” have not been
calculated yet. Follow the description of each one of the $N$ matrices. The
first line of the description of a matrix consists of a single integer $M (1
\leq M \leq 20)$, which represents the number of lines and the number of columns
of the matrix. Follow, then, $M$ lines, each one of $M$ integers $a_{ij} (0 \leq
a_{ij} \leq 2^{32}-1, 1 \leq i,j \leq M)$, which correspond to the cells of the
matrix, in a way such that consecutive values in a same line are separated by a
blank space.

## Output

Print the “square” of each matrix of the input, according to the meaning of the
“square” of a matrix to Atrapalhilton. Before printing each “square”, print the
line “Quadrado da matriz #x:” (without the quotation marks), in order to help
Atrapalhilton not to get lost while writing out the results to the notebook.
Start the counting in x = 4, after all, Atrapalhilton has already calculated the
“squares” of the first 3 matrices. Add as much blank spaces as needed to the
left of each value in order to get the values of a same column altogether flush
right, so that there is a blank space in addition to the mandatory blank space
which separates consecutive columns. Print also a blank line between two
consecutive “squares” of matrices.
