https://www.beecrowd.com.br/judge/en/problems/view/2167

# Engine Failure

Engineer Joe realizes that always happened a speed fall when the measures of
an engine speed slope were made at 10 ms time interval. But this fall happened
at varying points at each new engine test.

Joe got curious with that lack of pattern and wants to know, for each engine
test, what is the first point in which this speed fall happens.

## Input

The input is an engine test and is given in two lines. The first one has the
number N of speed measures $(1 \lt N \leq 100)$. The second line has $N$
integers: the engine RPM (revolutions per minute) $R_i$ of each measure ($0
\leq Ri \leq 10000$, for all $Ri$, such that $1 \leq i \leq N$). A measure is
considered a speed fall if it is lower than the previous measure.

## Output

The output is the measure index where the first speed fall happened in the
test. If no speed fall happens the output must be the number zero.
