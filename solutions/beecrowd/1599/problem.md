https://www.beecrowd.com.br/judge/en/problems/view/1599

# Peaks of Atlas

Morocco is cut by the Atlas Mountains, whose highest peak is Toubkal, with
4165 meters. These mountains give rise to many stories and myths throughout
antiquity, as, for example, the 12 tasks of Hercules. Near the city of
Marrakech is what is called "high Atlas", the highest part of these mountains.

The study of the altitudes of the various peaks has been done for centuries.
Ancient Berbers documents document the recording of different altitudes of the
various points of the Atlas Mountains since the sixteenth century. The
document is a map of the region divided into quadrants. In each quadrant is
noted that the average height point. We know that a point is a peak if the
height is greater than that quadrant of its neighbors (one quadrant has up to
8).

Your task in this exercise is to read this map and identify the peaks in the
documented region.

## Input

The entry consists of several instances and ends with the end of file (EOF).

Each instance corresponds to a region of the map and represented by a matrix
$N \times M (1 \leq N \leq 1000)$. The first row in each instance contains
the integers $N$ and $M$. For i = 1, 2,. . . N, $(i + 1)$-th row corresponte
the i-th row of the matrix and contains M integers separated by a space.

## Output

For each instance print the coordinates of the peaks of the corresponding map,
one per line, sorted first by rows and, in case of tie, by columns. If there
are no peaks, print -1. Print a blank line at the end of each instance.
