http://www.beecrowd.com.br/judge/pt/problems/view/1022

# TDA Racional

You were invited to do a little job for your Mathematic teacher. The job is to
read a mathematic expression in format of two rational numbers (numerator /
denominator) and present the operation result like a rational number. Each
operand or operator is separated by a blank space. The input sequence (each
line) must respect the following format: number, (‘/’ char), number, operation
char (‘/’, ‘*’, ‘+’, ‘-‘), number, (‘/’ char), number. The answer must be
presented followed by ‘=’ operator and the simplified answer. If the answer
can’t be simplified, it must be repeated after a ‘=’ operator.

## Input

The input contains several test cases. The first value is a integer $N (1 \leq
N \leq 1 \times 10^4)$, indicating the amount of test cases that must be read.
Each test case contains a rational value $X (1 \leq X \leq 1000)$, an
operation (-, +, * or /) and another rational value $Y$ $(1 \leq Y \leq
1000)$.

## Output

The output must be a rational number, followed by a "=" sign and another
rational number, that is the simplification of the first value. In case of the
first value can't be simplified, the same value must be repeated after the '='
sign.
