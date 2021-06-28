https://www.facebook.com/codingcompetitions/hacker-cup/2011/qualification-round/problems/B

# Peg Game

At the arcade, you can play a simple game where a ball is dropped into the top
of the game, from a position of your choosing. There are a number of pegs that
the ball will bounce off of as it drops through the game. Whenever the ball
hits a peg, it will bounce to the left with probability 0.5 and to the right
with probability 0.5. The one exception to this is when it hits a peg on the
far left or right side, in which case it always bounces towards the middle.

When the game was first made, the pegs where arranged in a regular grid.
However, it's an old game, and now some of the pegs are missing. Your goal in
the game is to get the ball to fall out of the bottom of the game in a specific
location. Your task is, given the arrangement of the game, to determine the
optimal place to drop the ball, such that the probability of getting it to this
specific location is maximized.

The image below shows an example of a game with five rows of five columns.
Notice that the top row has five pegs, the next row has four pegs, the next
five, and so on. With five columns, there are four choices to drop the ball
into (indexed from 0). Note that in this example, there are three pegs missing.
The top row is row 0, and the leftmost peg is column 0, so the coordinates of
the missing pegs are (1,1), (2,1) and (3,2). In this example, the best place to
drop the ball is on the far left, in column 0, which gives a 50% chance that it
will end in the goal.

```
x.x.x.x.x
 x...x.x
x...x.x.x
 x.x...x
x.x.x.x.x
 G
```

'x' indicates a peg, '.' indicates empty space.

## Input

You should first read an integer N, the number of test cases. Each of the next
N lines will then contain a single test case. Each test case will start with
integers R and C, the number of rows and columns (R will be odd). Next, an
integer K will specify the target column. Finally, an integer M will be
followed by M pairs of integer ri and ci, giving the locations of the missing
pegs.

## Constraints

- $1 \leq N \leq 100$
- $3 \leq R,C \leq 100$

The top and bottom rows will not have any missing pegs.
Other parameters will all be valid, given R and C

## Output

For each test case, you should output an integer, the location to drop the ball
into, followed by the probability that the ball will end in columns K,
formatted with exactly six digits after the decimal point (round the last
digit, don't truncate).

## Notes

The input will be designed such that minor rounding errors will not impact the
output (i.e. there will be no ties or near -- up to 1E-9 -- ties, and the
direction of rounding for the output will not be impacted by small errors).
