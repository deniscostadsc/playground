https://judge.beecrowd.com/en/problems/view/1803

# Matring

Matring is a mix of Matrix and String. It was developed by UNILA (Union of Nerds
for Integration of Logic and Adventure) to keep messages safe from
eavesdropping.

The first and last column of a matring keep the key to translate it to the real
message. The remaining columns of a matring represent an ASCII-coded string, one
column per character.

For a $N$-character long message, the corresponding matring is a $4(N+2)$ matrix
of digits. Each column is read as a 4-digit number; a top to bottom sequence of
digits is the same as a left to right sequence in horizontal.

Let the first number be $F$, the last number be $L$ and the remaining ones to be
a sequence of numbers $M_i$, where $1 \leq i \leq N$. The first column of a
matring is indexed as zero.

To decode a matring to an string, we must calculate: $C_i = (F * M_i + L)$ mod
$257$, where $C_i$ is the ASCII-coded character of the original message at
position $i$.

Your task is to develop an algorithm to decode matrings.

## Input

The input is a matring, i.e. a $4(N+2)$ matrix of digits (from 0 to 9), $0 < N <
80$.

## Output

The output is given in one single line and is the decoded string. Include the
end-of-line character after the string.
