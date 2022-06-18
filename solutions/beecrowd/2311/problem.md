https://www.beecrowd.com.br/judge/en/problems/view/2311

# Diving

In a given diving competition, each dive has a degree of difficulty and is
evaluated by seven judges. After each jump, the judges, who don't communicate
with each other, show their scores. A dive is evaluated between zero and ten
by each judge. After the scores are presented, the highest and the lowest
scores are discarded. The remaining scores are added and the sum is multiplied
by the degree of difficulty of the dive, which is a number between 1.2 and 3.8
defined before the dive. So, for example, assuming a diver's jump has
difficulty 2.0 and his scores are 6,0, 5,0, 5,0, 5,0, 5,0, 5,0 and 4,0.
Discarding the highest and lowest scores, we get to a result of 25.0. This
result is then multiplied by the degree of difficulty 2.0 for a final score of
50.0. You program must display the results of a competition following these
rules.

## Input

The first row of input has the number of divers $N (0 \leq N \leq 100)$. Next,
the name of each competitor is followed by the degree of difficulty $D (1.2
\leq D \leq 3.8)$ of the dive and, in the next line, the seven scores $S1$ to
$S7 (0 \leq S1 \space to \space S7 \leq 10)$ given by the judges.

## Output

The output must show the results of the competition, with the name of each
diver followed by the final score, in the order in which the data was input.
