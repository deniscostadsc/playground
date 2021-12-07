http://www.beecrowd.com.br/judge/en/problems/view/1105

# Sub-prime

The most recent economic crisis was partly caused by the manner in which banks
made loans to people unable to repay them and resold such loans to other banks
as debentures. Obviously, when people failed to repay their loans, the whole
system collapsed.

The crisis was so deep that it affected countries all over the world, including
Nlogonia, where the honored prime minister Man Dashuva ordered the Central Bank
chairman to come up with a solution. He came up with a brilliant idea: if all
banks could liquidate its debentures only with its own monetary reserves, all
banks would survive and the crisis would be averted.

However, with the elevated number of debentures and banks involved, this was an
extremely complicated task, so he asked for your help in writing a program
that, given the banks and the debentures printed by them, determines if it is
possible that all banks pay back their debts using only their monetary reserves
and credits.

## Input

The input consists of several test cases. The first line of each test case
contains two integers $B$ and $N$, indicating the number of banks
($1 \leq B \leq 20$) and the number of debentures printed by the banks
($1 \leq N \leq 20$). The banks are identified by integers between 1 and B.
The second line contains $B$ integers $R_i$ separated by spaces, indicating
the monetary reserves of each one of the B banks
($0 \leq R_i \leq 10^4$, for $1 \leq i \leq B$).  The $N$ following lines
contain each one three integers separated by spaces: an integer $D$,
indicating the debtor bank ($1 \leq D \leq B$), an integer C, indicating
the creditor bank ($1 \leq C \leq B e D \neq C$) and an
integer V, indicating the debenture value ($1 \leq V \leq 10^4$).

The end of input is indicated by a line containing only two zeros, separated
by spaces.

## Output

For each test case, your program should print a single line, containing a
single character: 'S', if it is possible to liquidate all debentures without a
bailout from the Central Bank of Nlogonia, or 'N' if a bailout is necessary.
