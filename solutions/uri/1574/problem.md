https://www.beecrowd.com.br/judge/en/problems/view/1574

# Robot Instructions

You have a robot standing on the origin of x axis. The robot will be given
some instructions. Your task is to predict its position after executing all
the instructions.

- LEFT: move one unit left (decrease p by 1, where p is the position of the
  robot before moving)
- RIGHT: move one unit right (increase p by 1)
- SAME AS i: perform the same action as in the i-th instruction. It is
  guaranteed that i is a positive integer not greater than the number of
  instructions before this.

## Input

The first line contains the number of test cases $T$ ($T \leq 100$). Each test
case begins with an integer $n$ ($1 \leq n \leq 100$), the number of
instructions. Each of the following n lines contains an instruction.

## Output

For each test case, print the final position of the robot. Note that after
processing each test case, the robot should be reset to the origin.
