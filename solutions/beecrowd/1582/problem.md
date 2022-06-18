https://www.beecrowd.com.br/judge/en/problems/view/1582

# The Pythagorean Theorem

Pythagoras was a greek mathematician before Euclid who lived between 570 and
495 BC, considered by Aristotle as ‘the first mathematician’. One of the most
ancient and most important theorems in History, the Pythagorean Theorem states
that, in any right triangle, the square of the hypotenuse equals the sum of
the squares of the catheti. The Theorem has several applications and is the
base of many results in Mathematics, Engineering, Physics and Computer
Science. Although the Theorem takes Pythagoras's name, it is believed that
babylonian mathematicians, even more ancient, had yet knowledge of the
formula.

![](imgs/UOJ_1582.jpg)

We call a positive integers triple (x, y, z) a pythagorean triple if it is
possible to exist a right triangle with sides x, y and z, no matter the order
the integers appear in the triple. For example, (3, 4, 5), (6, 8, 10) and (5,
13, 12) are pythagorean triples, because 52 = 32 + 42, 102 = 62 + 82 and 132 =
52 + 122. However, triple (6, 8, 10) is just triple (3, 4, 5) multiplied by 2,
and, for that, we say that (6, 8, 10) is not a primitive pythagorean triple. A
pythagorean triple (x, y, z) is said to be primitive if gdc(x, y, z) = 1.
Euclid proved in 3rd century BC that there are infinite primitive pythagorean
triples.

## Input

Each line of the input consists of 3 integers $x$, $y$ e $z
(1 \leq x, y, z \leq 10^4)$, separated by a blank space and given not necessarily in any order.

## Output

Print for each input line the line “tripla pitagorica primitiva” (without
quotation marks) if the given integers form a primitive pythagorean triple,
“tripla pitagorica” if they form a non-primitive pythagorean triple, or
“tripla” if they form no pythagorean triple at all.
