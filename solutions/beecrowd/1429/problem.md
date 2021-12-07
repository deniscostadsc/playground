http://www.beecrowd.com.br/judge/en/problems/view/1429

# Factorial Again!

Mathew, an engineering freshman, is developing an original positional notation
for representing integer numbers. He called it “A Curious Method”(ACM for
short). The ACM notation uses the same digits as the decimal notation, i.e., 0
through 9.

To convert a number A from ACM to decimal notation you must add k terms, where
k is the number of digits of A (in the ACM notation). The value of the i-th
term, corresponding the i-th digit ai, counting from right to left, is
$a_i \times i!$. For instance 719 ACM is equivalent to $53_{10}$, since
$7 \times 3! + 1 \times 2! + 9 \times 1! = 53$.

Mathew has just begun studying number theory, and probably does not know which
properties a numbering system should have, but at the moment he is only
interested in converting a number from ACM to decimal. Could you help him?

## Input

Each test case is given in a single line that contains a non-empty string of at
most 5 digits, representing a number in ACM notation. The string does not have
leading zeros.

The last test case is followed by a line containing one zero.

## Output

For each test case output a single line containing the decimal representation
of the corresponding ACM number.
