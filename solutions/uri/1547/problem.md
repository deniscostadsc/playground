https://www.urionlinejudge.com.br/judge/en/problems/view/1547

# Guess What

Professor Genesio received several shirts from OBI (Organization of Bacharels
and Intellectuals) to distribute to his students of Computer Science. To
distribute these shirts he organized the students of each class in small
groups (at maximum of 10) and defined that would make the draw of a shirt to
each group. Since Genesio don't want to spend much time with this task, he
asked you to help him with a program that would determine who was the student
winner according to the following rule: The first of each group to hit the
number chosen by Genesio obviously wins the shirt but if no one hit this
number, wins the shirt the first to get closest to this number.

It makes no difference who the group the teacher chooses to try to start
guessing. This will always be the student number 1, and so on.

## Input

The first line of input contains an integer $N$ that determines the amount of
test cases, or shirts that will be raffled. Each test case consists of two
lines. The first line contains two integers $QT$ ($4 \leq QT \leq 10$) and $S$
($1 \leq S \leq 100$) separated by a space, which indicate the amount of
students in the group and the secret number to be guessed. The second row
contains each $QT$ values, separated by a space.

## Output

For each test case, your program must print a integer number that indicates
the position of the winner of the shirt, according to the rules above
described.
