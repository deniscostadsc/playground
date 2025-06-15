https://judge.beecrowd.com/en/problems/view/2189

# Kermesse

The senior students decided to organize a bazaar to raise funds for the
graduation party. The party promised to be a success, because the father of one
of the trainees, Theophilus, who owns a computer store, decided to donate a
computer to be raffled among those who attend. Students prepared mulled wine
stalls, popcorn, candy, rehearsed the gang and put on sale tickets numbered
sequentially from 1. The ticket number would serve to draw the computer. It was
agreed that Theophilus would decide the draw method; in principle the draw would
be, of course, computerized.

The venue for the party was the school gym. The entrance of the participants was
the main door, which has a wheel where a person spends at a time. At the
entrance, an employee entered in a list in school computer, the ticket number,
in order of arrival of the participants. After the input of all participants,
Theophilus began working on the computer to prepare the draw. Checking the list
of gifts, he noticed a notable feature: there was only one case in the entire
list, the participant that had the numbered ticket with i, was the ith person to
enter the gym. Theophilus was so delighted by the coincidence that decided that
the draw would not be necessary: this person would be the winner of the
computer.

Knowing the list of participants, in order of arrival, your task is to determine
the winning ticket number, knowing that the winner is the only participant who
has the ticket number equal to its input position in the party.

## Input

The input consists of several test sets. The first line of a test set contains a
positive integer $N (0 \leq N \leq 10000)$ that indicates the number of
partygoers. The next line contains the following, in order of entry, of $N$
tickets of people who attended the party. The end of input is indicated when $N
= 0$. For each input test set there will be a single winner.

## Output

For each input test set your program should produce three lines. The first line
identifies the test set, in the form "Teste n", onde n is numbered from 1. The
second line should contain the winning ticket number, as determined by your
program. The third line should be left blank. The spelling shown in Example
output below should be followed strictly.
