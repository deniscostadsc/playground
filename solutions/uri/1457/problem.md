http://www.urionlinejudge.com.br/judge/en/problems/view/1457

# Oracle of Alexandria

Every Computer Scientist worth his salt knows the book "The Hitchhiker's Guide
to the Galaxy" and know the answer to the fundamental question about life, the
universe and everything. But what few know is that the story of Douglas Adams
is based on an Egyptian legend, of an oracle located in Eskendereyya
(Alexandria). Alexandria today is the largest city of Egypt, with more than 4
million inhabitants. It is in the Nile Delta, and stretches for 32km along the
Mediterranean coast. In the past, the city founded in 331 BC by Alexander the
Great, was one of the main cities in the world and there was the Lighthouse of
Alexandria (one of the 7 Wonders of the Ancient World), the Library of
Alexandria (the largest in the ancient world) and other fantastic works. The
legend also says that there was the great oracle of Alexandria. The
townspeople delivered the oracle small tickets with numbers noted, and
received back a number, that would be the answer to a fundamental question of
the universe related to the two given numbers.

In his treatise of 227 AD Cleomenes of Naucratis (who became administrator of
Alexandria when Alexander departed for his conquests) reports some results of
the oracle:

- Given 8 and 1 the oracle returned 40320;
- Given 10 and 3, returned 280;
- Given 4 and 2, returned 8;
- Given 21 and 19, returned 42.

Modern studies realized that what the oracle returned was nothing more than a
generalization of the factorial of an integer. As we know,

$N! = N \times (N-1) \times ... \times 1$.

What the oracle returned for the data N and K, was the K-factor of N, in other words,

$N \times (N-K) \times (N-2K) \times (N-3K) \times ...$,

in which the product was made while the difference is greater than or equal
to 1. We can represent the $K$-factor of a number for him followed by $K$
exclamations:

- 8! = 40320;
- 10!!! = 280;
- 4!! = 8;
- 21!!!!!!!!!!!!!!!!!!! = 42

They say that when reading about the legend of oracle Eskendereyya, Douglas
Adams got his inspiration for his work. Also, in Egypt is the inspiration of
the restaurant at the end of the universe, but that's another story...

Given the integers N and K your task is determine K-factor of N.

## Input

The input is composed of several instances. The first line of input contains
an integer $T$ indicating the number of instances.

The first (and only) row of each instance contains an integer $N$ followed by
$K$ points exclamation, where $1 \leq N \leq 100$ and $1 \leq K \leq 20$.

## Output

For each instance print a line containing the $K$-factor of $N$.

It is guaranteed that no instance in the input has a result greater than 1018.
