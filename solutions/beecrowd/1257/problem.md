http://www.beecrowd.com.br/judge/en/problems/view/1257

# Array Hash

You will be given many input lines with strings. The value of each character
in input is computed as follows:

$$Value = (Alphabet \space Position) + (Element \space of \space input) +
(Position \space in \space Element)$$

All positions are $0$-based. 'A' has alphabet position $0$, 'B' has alphabet
position $1$, ... The returned hash is the sum of all character values in
input. For example, if input is:

    CBA
    DDD

then each character value would be computed as follows:

    2 = 2 + 0 + 0 : 'C' in element 0 position 0
    2 = 1 + 0 + 1 : 'B' in element 0 position 1
    2 = 0 + 0 + 2 : 'A' in element 0 position 2
    4 = 3 + 1 + 0 : 'D' in element 1 position 0
    5 = 3 + 1 + 1 : 'D' in element 1 position 1
    6 = 3 + 1 + 2 : 'D' in element 1 position 2

The final hash would be $2+2+2+4+5+6=21$.

## Input

The input contains many test cases. The first line of input contains an
integer N that indicates the amount of test cases. Each test case begin with
an integer $L (1 \leq L \leq 100)$ that indicates the quantity of following
lines. Each of these $L$ lines will contains a string with up to $50$
uppercase letters ('A' - 'Z').

## Output

For each test case print the hash calculated according to the above
explanation.
