https://judge.beecrowd.com/en/problems/view/2782

# Stepladder

We say that a sequence of numbers is a stepladder, if the difference between
consecutive numbers is always the same. For example, "2, 3, 4, 5" and "10, 7, 4"
are stepladder. Note that any sequence with only one or two numbers is also a
stepladder! In this problem we are looking for stepladder in a larger sequence
of numbers. Given a sequence of numbers, we want to determine how many ladders
there are. But we're only interested in stepladder as long as possible.
Therefore, if one stepladder is a piece of another, we consider only the
largest. For example, in the sequence "1, 1, 3, 5, 4, 8, 12" we have 4 different
steps: "1, 1, 1", "1, 3, 5", "5, 4" 4, 8, 12 ".

## Input

The first line of the grid contains an integer $(1 \leq N \leq 1000)$ that
defines the size of the sequence of numbers. The second line contains $N$
integers defining the sequence. The value of the sequence numbers is between
$-10^6$ and $10^6$ inclusive.

## Output

Print a line containing an integer representing how many stepladders there are
in the sequence.
