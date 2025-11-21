https://judge.beecrowd.com/en/problems/view/1211

# Economic Phonebook

Due to the large number of complaints, the telephone company of St. Petersburg
is being forced to invest heavily in improving its services. To do this, the
company decided to reduce the budget of some sectors to increase other more
essential. One of the sectors that will have its budget reduced is the
printing of phone books.

With a reduced budget, the sector of printing phonebooks can not buy enough
toner to print the complete lists. As telephone numbers are printed vertically
aligned, it was suggested the following solution: from the second phone number
printed, the initial digits of the next number to be printed that match the
above number are omitted, leaving only one space white. For example, for the
numbers 535456, 535488, 536566 and 835456 would be printed is as follows:

    5 3 5 4 5 6
            8 8
        6 5 6 6
    8 3 5 4 5 6

Note that this impression has saved the impression 6 characters. The telephone
company also wondered not print the repeated suffixes, but in tests saw that
the answer was not good for the user and therefore decided to make only the
elimination prefixes. To determine whether the economy will be sufficient, the
printing industry wants to know the maximum number of characters that can be
omitted. However, as in any big city, there are several phone numbers and they
do not want to spend man-hours to manually calculate this value. So it's up to
you, new employee of the company, automate the economy made ​​by toner, the
number of characters.

## Input

The input consists of various test cases and ends with the end of file (EOF).
Each test case contains an integer $N$  , which reports the number of phones in
the list. The next $N$ $(1 \leq N \leq 10^5)$ lines have, each one, a phone $X_i$, up to 200
characters. For one test case phone numbers have the same number of
characters. A phone number can start with the character '0 '.

## Output

For each test case print one line indicating the maximum number of characters
saved by this process.
