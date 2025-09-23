https://judge.beecrowd.com/en/problems/view/1245

# Lost Boots

The Boots and Shoes supplies division of the Army purchased a large number of
pairs of boots of various sizes for his soldiers. However, a failure of the
packaging factory contracted, not all supplied boxes containing a pair of boots
correct, with two boots of the same size, one for each foot. The sergeant told
the recruits withdraw all boots all the boxes to repack them, this time
correctly.

When the sergeant discovered that you knew programming, he asked with the usual
kindness you write a program that, given a list containing the description of
each boot delivered, determines how many pairs of boots could be formed in
total.

## Input

The input consists of several test cases. The first line of a test case contains
an integer $N (2 \leq N \leq 10^4)$, $N$ is even, indicating the number of
individual boots delivered. Each of the $N$ rows following describes a boot,
containing an integer number $M (30 \leq M \leq 60)$ and a letter $L$, separated
by a blank space. $M$ indicates the number of the boot and L indicates the size
of the boot: $L$ = 'D' indicates that the boot is to the right foot, $L$ = 'E'
indicates that the boot is for the left foot.

## Output

For each test case print one line containing a single integer indicating the
total number of pairs that can be formed correct.
