http://www.urionlinejudge.com.br/judge/en/problems/view/1456

# Brainfuck

Programming languages, soccer teams and religion are not discussed. Each
person has their favorites and do not admit that the other is better (forgive
me the Corinthians, Palmeiras and São Paulo supporters). A group of
researchers (who had nothing to do) decided to write an ideal'' programming
language (ideal for who, pale face?): The Brainfuck. Brainfuck is a
programming language that works like a Turing machine. This machine has
components such as a vector of 30000 bytes, indexed 0-29999, and a pointer
that holds such a position vector. At each step, the machine performs in
accordance with an instruction byte stored in the location indicated by the
pointer vector. When this byte is equal to zero, the execution is terminated.
The set of valid instructions of the language is the following:

| Instruction | Description |
| -- | -- |
| > | Increments the pointer. |
| < |  Decrements the pointer. |
| + | Increments the byte at the position indicated by the pointer. |
| - | Decrements the byte at the position indicated by the pointer. |
| . | Print the value of the byte at the position indicated by the pointer. |
| , | Reads a byte and stores the position indicated by the pointer. If there is nothing to be read (input ended), store zero. |
| [ | Start the loop: Executes the delimited code until the byte at the position indicated by the pointer is equal to zero. |
| ] | End of loop. |
| # | Print the values of the first 10 positions of the vector. |

The pointer always starts with value 0, as all the other positions in the
vector. When describing programs in brainfuck language, characters other than
those described above are ignored.

## Input

The input contains several instances. The number of instances is given in the
first line of the input. Each instance starts with a blank line. The next line
contains a string of printed characters (in other words, except whitespace and
tab), which will contain the input for the program. That is, the read commands
are performed in this chain. All the input for the program is contained on a
single line. Finally, the third row contains the description of the program.
As the second line, this also does not contains white characters and is
entirely contained in a single line (the separation made in the second example
was to avoid the line overflow). Both the second and the third row are between
1 and 100000 characters.

## Output

For each instance, you should print "Instancia k", where k is the number of
the current instance. On the next line you should print the output of the code
provided in the input. After each instance, your program should print a blank
line.
