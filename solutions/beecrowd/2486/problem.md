https://www.beecrowd.com.br/judge/en/problems/view/2486

# C Mais ou Menos?

Lately, several people are going to Dr. Cláudia Café com Leite to know if they
are consuming the recommended daily amount of vitamin C. This exhausted her so
she asked you to write a program for her that, given the daily intake of foods
rich in vitamin C by a person, returns how much this person has to consume
more or less to achieve the recommended amount.

In order to do such, you can use the following table:

| Foods rich in Vitamin C | Amount of Vitamin C |
|-|-|
| suco de laranja | 120 mg |
| morango fresco | 85 mg |
| mamao | 85 mg |
| goiaba vermelha | 70 mg |
| manga | 56 mg |
| laranja | 50 mg |
| brocolis | 34 mg |

Consider the recommended daily intake of vitamin C is between 110 mg and 130
mg, inclusive.

## Input

Each test case consists of an integer $T (1 \leq T \leq 7)$ indicating that
the person daily intakes $T$ foods among the 7 foods from the table. The next
$T$ lines with an integer $N$ and a food (lowercase and no blank spaces)
indicates that the person intakes an amount $N$ of that food. Read input until
$T = 0$.

## Output

For each test case ($T$), if the intake exceeds the recommended limit, print
`"Menos X mg"`, in which X represents how much less the person must consume to
reach the recommended limit; if the intake doesn't reach the recommended
amount, print `"Mais X mg"`, in which X represents how much more the person
must consume to reach the recommended amount; if the intake is between the
recommended amount range, print `"X mg"`, in which X represents the daily
amount of vitamin C intaken by the person.

