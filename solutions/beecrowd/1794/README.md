https://judge.beecrowd.com/en/problems/view/1794

# Laundry

Tired of washing your dirty clothes, your mother decided that, for now on, who
washes your clothes is you.

On the laundry room of your home there is a washer and a dryer, each with its
own limits of minimum and maximum amount of clothes to be washed and dried per
time. Therefore, the washer can only be used if you put at least LA and at
most LB clothes inside it, and similarly the dryer can only be used if you put
at least SA and at most SB clothes inside it.

You currently have $N$ clothes to be washed and dried, and you want to find
out if it is possible to use the washer and dryer to wash and dry all of your
clothes, following the rules described above.

## Input

On the first line of input there is an integer $N (1 \leq N \leq 100)$.

On the second line of input there are two integers $LA$ and $LB (1 \leq LA \lt
LB \leq 100)$.

On the third line of input there are two integers $SA$ and $SB (1 \leq SA \lt
SB \leq 100)$.

## Output

Print the word "possivel" if it is possible to wash and dry all of your
clothes following the rules described on the statement, or "impossivel"
otherwise.
