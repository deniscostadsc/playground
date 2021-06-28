http://www.urionlinejudge.com.br/judge/problems/view/1045

# Triangle Types

Read 3 floating-point values ($A$, $B$ and $C$) representing the sides of a
triangle and arrange them in decreasing order, so that the side A is the
biggest of the three sides. Next, determine the type of triangle that they can
make, based on the following cases always writing an appropriate message:

- if $A \geq B + C$, write the message: NAO FORMA TRIANGULO
- if $A^2 = B^2 + C^2$, write the message: TRIANGULO RETANGULO
- if $A^2 \gt B^2 + C^2$, write the message: TRIANGULO OBTUSANGULO
- if $A^2 \lt B^2 + C^2$, write the message: TRIANGULO ACUTANGULO
- if the three sides are the same size, write the message: TRIANGULO EQUILATERO
- if only two sides are the same and the third one is different, write the
message: TRIANGULO ISOSCELES

## Input

The input contains three floating point numbers, $A$, $B$ and $C$.

## Output

Print all the classifications of the triangle presented in the input.
