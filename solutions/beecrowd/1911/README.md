https://judge.beecrowd.com/en/problems/view/1911

# Help Girafales

Minutes before the end of the class, teacher Girafales passes an attendance
list. One day he decided to check the signatures and noted that some students
signed different in some classes and suspected that someone could be signing for
them.

As the teacher has many students and not enough time (coffee with Dona Florinda
is priority), he asked you to help him validate the students signatures. A
signature is considered false if there is more than one difference between the
original and the one that is being checked. Consider difference an uppercase
letter as a lowercase or vice versa.

## Input

There will be several test cases. The first line of each case starts with an
integer $N (1 \leq N \leq 50)$ representing the amount of students in the class.
The next $N$ lines will be as follows:

    Student Name   Student Original Signature

Then there will be an integer $M (0 \leq M \leq N)$, representing the number of
students attending the class. $M$ lines follow in the following format:

    Student Name   Signature of the day

All students have only the first name on the list, all names are different and
contain no more than 20 letters (a-z A-Z).

The input ends with $N = 0$, which should not be processed.

## Output

For each case, output a single line, the amount of false signatures found.
