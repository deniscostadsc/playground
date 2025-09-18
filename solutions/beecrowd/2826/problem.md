https://judge.beecrowd.com/en/problems/view/2826

# Lexical

As we know, the lexicon is the set of words in a language. In western languages,
it is usual to write using the Latin alphabet, with 26 letters from a to z.

It is usual to enumerate the Latin letters in the following order: a, b, c, d, e
f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z.

If a list of words is sorted using this order, it is much easier to find them.
Your job in this problem is to sort 2 words using this ordering.

Given 2 words A and B. If the first character of A comes before the first
character of B, place A before B. If it is the same character, we use the
following character to break the tie. If the second is also the same, we use the
following, an so on. When all characters from A are equal to the beginning of B,
or if all characters of B are equal to the beginning of A, we place the shorter
word first.

## Input

The input contains 2 words using lowercase characters from a to z. The length of
the words is not larger than 20 characters.

## Output

The output contains the same 2 words in lexicographical order.
