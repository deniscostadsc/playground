https://www.beecrowd.com.br/judge/en/problems/view/2162

# Peaks and Valleys

Professor MC realized that at each 100 meter interval there is a peak in the
Nlogony landscape. And that at exactly half way of each two peaks there is a
valley. That means that at each 50 meters there is a valley or a peak and,
alongside the landscape, there is not a peak followed by another peak neither
there is a valley followed by another valley.

Professor MC got curious with that pattern and wants to know if this happens
again to other landscapes. Your task is, given a landscape, to indicate if it
has this pattern.

## Input

The input is given in two lines. The first one has the number $N$ of landscape
measures ($1 < N \leq 100$). The second line has $N$ integers: the height
$H_i$ of each measure ($-10000 \leq H_i \leq 10000$, for all $H_i$, such that
$1 \leq i \leq N$). A measure is considered a peak if it is higher than the
previous measure. A measure is considered a valley if it is lower than the
previous measure.

## Output

The output is given in one single line. If the landscape has the same pattern
of Nlogony it must be shown the number 1. Otherwise, the number 0 must be
shown.
