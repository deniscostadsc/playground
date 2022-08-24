https://www.beecrowd.com.br/judge/en/problems/view/1077

# Infix to Posfix

The teacher asked you to write a program that convert an infix expression to a
postfix expression. Like you know, the terms in and pos are according with the
operators position. The program will have to handle only with the binary
operators +, -, \*, /, ^. parenthesis, letters and numbers. An example would
be an expression like: (A*B+2*C^3)/2*A. The program must convert this
expression (infix) to the posfix expression: AB*2C3^*+2/A* All expressions of
the test cases are expressions with valid sintax.

## Input

The first line of input is an integer $N (N \lt 1000)$, that indicates the
total number of test cases. Each case is a valid expression in the infix
format.

## Output

For each test case, print the expression converted to posfix expression.
