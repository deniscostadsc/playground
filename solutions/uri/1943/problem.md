https://www.beecrowd.com.br/judge/en/problems/view/1943

# Top N

The regional phase of the SBC Programming Contest happened recently, where
more than 600 teams participated in more than 40 cities around Brazil. Your
friend competed, and when asked about his position he told you: “I got placed
in the top 10".

You were happy for your friend, but you could not stop asking yourself about
what was his real position. “Top 10” could mean any position between first and
tenth placed, however if he had placed first he would have said “Top 1”, if he
had placed second or third he would have said “Top 3”, and if he had placed
fourth or fifth he would have said “Top 5”. Therefore, his real position was
between sixth and tenth, because people tend to put themselves in the lowest
category they belong.

You gathered all the categories people most use: 1, 3, 5, 10, 25, 50 and 100.
Given a position K, write an algorithm that says the number of the lowest
category this position belongs.

## Input

Each test case has one integer $K$, representing a position
($1 \leq K \leq 100$).

## Output

For each test case you should print one line with the sentence “Top N”, and
replace N by the number of the lowest category the position K belongs.
