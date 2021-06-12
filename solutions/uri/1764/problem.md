https://www.urionlinejudge.com.br/judge/en/problems/view/1764

# Itinerary of Santa Claus

Before Santa Claus begin his travels in Brazil to deliver Christmas presents,
he asked you to help him drawing a map with all the cities that he should
visit. Follows the rule to draw this map: the sum of all routes (distances
between two cities) existing on the map should be as small as possible and
must be possible to arrive in any destination from any origin. Claus does not
mind to go to a particular city more than once, as long as it uses only the
routes drawn on the map.

## Input

The input file contains several test cases. Each test case starts with two
numbers $M$ ($2 \leq M < 40000$) and $N$ ($1 \leq N < 50000$), the number of
cities and the number of roads respectively. Input is terminated by
$M = N = 0$. Then follow N integer triples $X$ ($0 \leq X$), $Y$ ($Y < M$) and
$Z$ ($1 \leq Z \leq 999$), specifying that there will be a bidirectional route
between $X$ and $Y$ with $Z$ kilometers, considering that $X \neq Y$ and the
total sum of all routes in each map is less than $2^{31}$.

## Output

For each test case, print a single integer indicating the sum of all distances
or routes of your map.
