https://www.beecrowd.com.br/judge/en/problems/view/1200

# BST Operations I

Marcela needs your help to write a computer program about binary search tree.
The program must have the following commands:

- I n: Insert the n element in the current Binary Search Tree.
- PREFIXA: print the pre-order traversal for the current tree
- INFIXA: print the in-order traversal for the current tree
- POSFIXA: print the post-order traversal for the current tree
- P n: Search the n element, printing a message indicanding if n exist.

By using this program, at any time must be possible to insert a new element,
print the Pre-order, In-order or Post-order traversal or search any element
inside the tree.

## Input

The input contains N lines and each line contains an operation using letters
(A-Z, a-z) over a binary search tree, that initially will be empty. The first
line of input contains an insertion (I). The next lines can have any command
described above, like the given example. The end of input is determined by EOF.

Obs: Consider that will not be repeated elements in the tree.

## Output

Each line of the input excepting the lines with the "I" command must produce
one output line. The output must be acording to the given example, remembering
that "existe" means exist and "nao existe" means don't exist in portuguese.
There is no blank space after the last line char, otherwise you`ll get
Presentation Error.
