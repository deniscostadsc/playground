http://www.beecrowd.com.br/judge/en/problems/view/1222

# Short Story Competition

Machado wants to be a writer. He has written many short stories, book reviews,
reports of trips he made, and a little romance. Now Machado wants to take part
in a short story competition, which has very strict rules about the submission
format. The rules of the competition limit the number of total pages, and
specify the maximum number of characters per line, and the maximum number of
lines per page. Additionally, each word must be written integrally in one line
(ie, a word cannot be separated in two lines). Machado wants to write a story
with as many words as possible within the rules of the contest, and needs your
help. Given the maximum number of characters per line, the maximum number of
lines per page, and the words of the short story that Machado is writing, he
wants to know the minimum number of pages that his short story will ocuppy,
considering the rules of the contest.

## Input

The first line of a test case contains three integers $N$
($2 \leq N \leq 1000$), $L$ ($1 \leq L \leq 30$) and $C$
($1 \leq C \leq 70$), which indicate, respectively, the number of words of the
short story, the maximum number of lines per page and the maximum number of
characters per line. Machado’s short story is innovative and contains no
characters besides upper and lower case letters and blanks.  The second line
contains Machado’s short story, consisting of $N$ words
($1 \leq length \space of \space each \space word \leq C$) separated by
exactly one blank space. The end of input is determined by EOF.

## Output

For each test case your program must output a single line containing a single
integer indicating the minimum number of pages the short story will ocuppy,
considering the contest rules.
