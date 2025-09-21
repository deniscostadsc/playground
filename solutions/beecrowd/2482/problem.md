https://judge.beecrowd.com/en/problems/view/2482

# Noel's Labels

As usual, this year Noel received numerous gifts requests. However, due to some
unforeseen circumstances, he will not be able to deliver all those present in
person this year. Then he decided to use the old and good traditional mail, for
some requests that can be delivered by letter.

For this task, he asked elf Evergreen Xadada to help him print labels on all the
envelopes that will be destined for some of these children, whose request can be
delivered by letter. Each of these labels should only contain the child's name
and the "Merry Christmas" greeting in the child's language. To assist in this
task, Noel provided a table with several languages and the name and country of
each of the selected children, according to the example below. You should help
Evergreen by making a program that prints these labels.

## Input

The input is composed of a single test case. The first line of input contains an
integer $N (1 \lt N \lt 100)$ that indicates the number of translations of the
word "Merry Christmas" in the input. The next $N * 2$ lines respectively contain
the name of a language followed by the translation of "Merry Christmas" in this
language. Next, the input contains an integer $M (1 \lt M \lt 100)$ which
indicates the number of children who will receive the cards. The next $M * 2$
lines will contain, respectively, the child's name and the native language of
this child.

Note: It is guaranteed that no translation appears repeated or duplicated and
the countries of all children are present in the list of countries.

## Output

Your program should print all labels according to the input, as in the example
below. Always print a blank line after printing each of the labels, even after
the last one.


