https://judge.beecrowd.com/en/problems/view/2551

# New Record

The great Curitiban street marathon will occur in the next few days! Many
athletes are training for the big day! Flávio is one of these athletes. He
trains daily, hoping to be well placed in the marathon. He runs every morning on
the streets near to his house.

His trainings are monitored by an app installed on his smartphone. After each
training, Flávio knows both the duration and the distance he ran. With these
information, he can determine his average speed in the training.

Flávio is really concerned about the evolution of his performance in his
trainings, and, in particular, about the records of his average speed. Such
record is beaten in some training when the average speed of that training is
greater than all average speeds of the previous trainings. Help Flávio to
determine in which trainings he beat his record.

## Input

The input contains several test cases. The first line of each test case contains
an integer $N (1 \leq N \leq 30)$, the number of trainings. Consider that the
trainings were done in days $1, 2,...,N$. The next N lines describe the
trainings. Line $i (1 \leq i \leq N)$ contains two integers $T_i$ and $D_i (1
\leq T_i, D_i \leq 100)$, the duration of the training (in minutes) and the
distance ran during it (in kilometers).

The input ends with end-of-file (EOF).

## Output

For each test case, print a list of integers indicating the days in which the
record was beaten. Each day must be printed in a single line. Print them in
ascending order. Please notice that day 1 must always be printed.
