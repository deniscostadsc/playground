http://www.beecrowd.com.br/judge/en/problems/view/1024

# Encryption

You have been asked to build a simple encryption program. This program
should be able to send coded messages without someone been able to read
them. The process is very simple. It is divides into two parts.

First, the numbers and special characters should not be changed. Each of
the remaining characters to be shifted three positions to the right, according
to the ASCII table: letter 'a' should become letter 'd', letter 'y' must become
the character '|' and so successively. Second, each line must be reversed. After
being reversed, the characters from the half on (truncated) must be moved one
position to the left in ASCII. In this case, 'b' becomes 'a' and 'a' becomes '`'.

For example, if the resulting word of the first part is "tesla", the letters "sla"
should be moved one position to the left. However if the resulting word of the first
part is "t#\$A", the letters "A\$" are to be displaced.

## Input

The input contains a number of test cases. The first line of each test case
contains an integer $N (1 \leq N \leq 1 \times 10^4)$, indicating the number of lines
the problem should encrypt. The following N lines contains M characters each
$M$ ($1 \leq M \leq 1 \times 10^3$).

## Output

For each test case, you must present the encrypted message.
