https://www.urionlinejudge.com.br/judge/en/problems/view/2534

# General Exam

The national math exam is done every leap year in Nlogonia. Every citizen is
evaluated, so it is possible to study the development of logic and math in the
country along the years.

After their exams are graded, the citizens are sorted according to their
grades (the higher the grade, the better the citizen). They get discounts in
their taxes according to their positions in this rank.

The Statistic Central Office (SCO) is in charge of processing the grades
obtained in the exam. This year, however, Vasya, one of the people in charge,
is at the hospital, and so you were hired to finish his job.

Write a program that, given the number of citizens and their grades, answers
queries informing the grade of the citizen that is ranked at a given position.

## Input

The input contains several test cases. The first line of each test case
contains two integers $N$ ($1 \leq N \leq 100$) and $Q$ ($1 \leq Q \leq 100$),
the number of citizens and the number of queries.

Each of the next N lines contains the grade ni obtained by the i-th citizen
($0 \leq ni \leq 30000$).

Each of the next Q lines contains a position pi.

The input ends with end-of-file (EOF).

## Output

For each test case, print, for each query, a line containing the grade of the
citizen that is ranked at position Pi.
