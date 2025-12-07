https://judge.beecrowd.com/en/problems/view/1437

# Turn Left!

This year the sergeant is having more work than usual to train the recruits.
One of them is very clumsy, and occasionally does everything wrong - for
example, instead of turning right when commanded, he turns left, causing great
confusion in the battalion. The sergeant has a reputation for tough and will
not let the recruit in peace while he does not learn how to properly execute
the commands. On Saturday afternoon, while all other recruits are off, he
forced the recruit to do an extra training. With the recruit marching, stopped
in the same place, the sergeant issued a series of commands "Turn left!" and
"Turn right!". For each command, the recruit must rotate about the same point
and give a quarter turn in the direction corresponding to the command. For
example, if the recruit is initially with his face oriented to the north,
after a command "Turn left!" he should stay with his face oriented to the
west. If the recruit is initially with his face oriented to the east, after a
command "Turn right!" He must have his face oriented to the south. However,
during training in which the recruit had initially his face turned to the
north, the sergeant issued a series of commands so extensive, and so quickly,
that even he was confused and does not know which direction the recruit must
have its face turned to after the execution of all the commands. Can you help
the sergeant?

## Input

The input contains several test cases. The first line of a test case contains
an integer $N$ indicating the number of commands issued by the sergeant $(1
\leq N \leq 1000)$. The second line contains N characters, describing a series
of commands issued by the Sergeant. Each command is represented by an letter:
'E' (for "Turn left!") and 'D' (for "Turn right!"). The end of input is
indicated by $N = 0$.

The input must be read from standard input.

## Output

For each test case in the input your program must produce one line of output,
indicating the direction in which the recruit must have its face turned after
performing a series of commands, considering that at the beginning the recruit
has its face turned to north . The line should contain a letter between 'N',
'L', 'S' and 'O', representing respectively the directions north, east, south
and west.

The output should be written to standard output.
