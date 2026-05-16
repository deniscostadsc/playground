https://judge.beecrowd.com/en/problems/view/1632

# Variations

The internet is not as safe as it was in the past. One evidence of it is the
increase in the number of hacker attacks. To worsen, when a hacker steals a
password from a user in a specific site, he has access to all the other accounts
of this user in other sites, because most of the users nowadays use the same
password in all sites.

One of the proposed solutions to this problem is to use different passwords for
each site, or even different variations of the same password. For example, to
vary the password “potato”, it's possible to use the password “pOtaTo”,
“P0tat0”, “pot4TO”, etc. In other words, for each character of the alphabet,
it's possible to make a variation changing the case of the character (lower case
or upper case). Moreover, to increase the total number of variations, for the
characters A, E, I, O and S it's possible to use the numbers 4, 3, 1, 0 and 5,
respectively.

Your friend needs to increase the number of variations of his password, and
asked for your help. Given the password that he chose, find out the number of
different variations that it's possible to build.

## Input

The first line contains an integer T, indicating the number of test cases to
follow.

Each test case contains a sequence of characters S, indicating your friend's
password. For each password, there will be at least 1 and at most 16 characters,
which can be any of the 26 letters of the alphabet, lower or upper case.

## Output

For each test case print one line containing one integer, indicating the number
of different variations that is possible to build with the given password,
including itself.

