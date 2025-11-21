https://judge.beecrowd.com/en/problems/view/1550

# Inversion

Peter is a curious boy who liked electronics. One day, the boy was playing in
his school lab and found a box full of small electronic devices made by other
students in previous years.

Inside that box was a device that had only one display and two buttons. This
display had an integer. Pressing the buttons, Peter discovered the functions
for each of the buttons. The first button add a unit to the number on the
display. The second button reverse the digits, for example, 123 inverted is
321 and 150 inverted is 51 (ignore the leading zeros).

Initially, the display showed the number $A$. After discover the functions of
the buttons, Peter wants to know how to change the display number of $A$ to a
greater number equal to $B$. Your job in this problem is to help Peter to find
out what the minimum number of button pressings to make the display the number
be equal to $B$.

## Input

The input is started by an integer $T, 0 \lt T \leq 500$, which indicates the
number of test cases. After this, the input consists of $T$ lines, each one
containing two integers $A$ and $B$, $0 \lt A \lt B \lt 10000$, $A$ is equal
to the initial value on the display and $B$ is equal to the final number we
need to get on the display.

## Output

For each test, your program must output one integer equal to the minimum
number of button pressings to make the number A on the displays change to the
number B.
