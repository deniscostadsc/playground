https://judge.beecrowd.com/en/problems/view/1267

# Pascal Library

Pascal University, one of the oldest in the country, needs to renovate its
Library Building, because after all these centuries the building started to
show the eﬀects of supporting the weight of the enormous amount of books it
houses.

To help in the renovation, the Alumni Association of the University decided to
organize a series of fund-raising dinners, for which all alumni were invited.
These events proved to be a huge success and several were organized during the
past year. (One of the reasons for the success of this initiative seems to be
the fact that students that went through the Pascal system of education have
fond memories of that time and would love to see a renovated Pascal Library.)

The organizers maintained a spreadsheet indicating which alumni participated
in each dinner. Now they want your help to determine whether any alumnus or
alumna took part in all of the dinners.

## Input

The input contains several test cases. The ﬁrst line of a test case contains
two integers $N$ and $D$ indicating respectively the number of alumni and the
number of dinners organized $(1 \leq N \leq 100 \space and \space 1 \leq D
\leq 500)$. Alumni are identiﬁed by integers from $1$ to $N$. Each of the next
D lines describes the attendees of a dinner, and contains N integers $X_i$
indicating if the alumnus/alumna i attended that dinner $(X_i = 1)$ or not
$(X_i = 0)$. The end of input is indicated by $N = D = 0$.

## Output

For each test case in the input your program must produce one line of output,
containing either the word ‘yes’, in case there exists at least one
alumnus/alumna that attended all dinners, or the word ‘no’ otherwise. The
output must be written to standard output.
