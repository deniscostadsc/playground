https://judge.beecrowd.com/en/problems/view/2108

# Counting Characters

Matheus was talking to his bride by text message, when she sent the following
message:

1-4-3

He did not understand the message, so he asked what it meant, and she said it
means 'I Love You', and soon he realized that each separate number by a ' - ' is
the number of letters for each of words composing the phrase. With that, he had
the idea of creating a program that entering certain phrase, it calculates the
size of each word and separates the values by ' - '. But he still had the idea
that the program should receive several phrases line by line and at the end of
the program the word with the greatest number of characters should be displayed.

## Input

The input consists of several test cases. The first line of a test case contains
a $1 \leq$ String $\leq 100$ with a single word or a phrase. Test cases will be
processed when the number 0 is received. There can be no more than a space
separating each word.

## Output

For each test case, display the number of characters in each word that makes up
the received phrase. Divide the number of characters of each word for ' - '.
Also display, the word with the greatest number of characters of all received
phrases.

Obs: If have words with identical numbers of characters, consider last received.
