https://judge.beecrowd.com/en/problems/view/1769

# SSN 1

In Brazil, the equivalent to Social Security Number is usually called CPF. It is
composed by 11 digits and the two lasts are function of the nine previous. In
this way, if a person informs a CPF, by mistake or on purpose, it is possible to
find out. Let us introduce some notation. Let a CPF be

$$a_1a_2a_3.a_4a_5a_6.a_7a_8a_9-b_1b_2$$

To get $b_1$, one can multiply $a_1$ by 1, $a_2$ by 2, $a_3$ by 3, so on, up to
$a_9$ by 9 and sum these results. Then, $b_1$ is the remaining of this number
when divided by 11, or 0 in case the remaining is 10.

Analogous, to get $b_2$, one can multiply $a_1$ by 9, $a_2$ by 8, $a_3$ by 7, so
on, up to $a_9$ by 1 and sum these results. Then, $b_2$ is the remaining of this
number when divided by 11, or 0 in case the remaining is 10.

Given a CPF number, you have to tell whether it is valid or not.

## Input

The input is composed by an unknown number of CPF numbers, not more than 10000
cases. Each line has a CPF in the form

$$d_1d_2d_3.d_4d_5d_6.d_7d_8d_9-d_1d_2$$

## Output

If the given CPF is valid, print "CPF valido". Otherwise, print "CPF invalido".


