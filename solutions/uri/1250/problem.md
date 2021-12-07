http://www.beecrowd.com.br/judge/en/problems/view/1250

# KiloMan

You've reached one of the last bosses in the new hit 2-D side-scrolling action
game, KiloMan. The boss has a large gun that can shoot projectiles at various
heights. For each shot, KiloMan can either stand still or jump.  If he stands
still and the shot is at height 1 or 2, then he gets hit. If he jumps and the
shot is at a height above 2, then he is also hit. Otherwise, he is not hit.
Given the height of each shot and a sequence of jumps, how many hits will
KiloMan take?

## Input

The input contains several test cases. The first line of input contain an
integer N that indicates the number of test cases. Each test case is composed
by three lines and starts with a line containing the number of shots $S$
($1 \leq S \leq 50$).  The second line contains S integers, that represent the
pattern of heights at which the shots are being fired. Each element of pattern
will be between 1 and 7, inclusive.  The third line of input contains the
string 'jumps', that represents the sequence of jumps that KiloMan will
attempt; 'J' means he will jump and 'S' means he will stand still. For
example, if the first number of the pattern is 3 and the first character of
jumps is 'J', then KiloMan will jump right as a shot is fired at height 3 (and
thus he will be hit).

## Output

For each case, your program should print an integer representing the number of
times KiloMan is hit.
