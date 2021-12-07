http://www.beecrowd.com.br/judge/en/problems/view/1467

# Zero or One

Everyone probably knows the game Zero or One (in some regions in Brazil also
known as Two or One ), used to determine a winner among three or more players.
For those u nfamiliar, the game works as follows. Each player chooses a value
between zero or one; prompted b y a command (usually one of the contestants
announces “Zero or... One!”), all participants show the value chosen using a
hand: if the value chosen is one, the contestant shows a hand with an extended
i ndex finger; if the value chosen is zero, the contestant shows a hand with
all fingers closed. The winner is the one who has chosen a value different
from all others. If there is no player with a value different from all others
(e.g. all players choose zero, or some players choose zero and some players
cho ose one), there is no winner. Alice, Bob and Clara are great friends and
play Zerinho all the time: to d etermine who will buy popcorn during the movie
session, who will enter the swimming pool first, etc.. They play so much that
they decided make a plugin to play Zerinho on Facebook. But sinc e the don’t
know how to program computers, they divided the tasks among friends who do
know, including you. Given the three values chosen by Alice, Bob and Clara,
each value zero or on e, write a program that determines if there is a winner,
and in that case determines w ho is the winner.

## Input

The input contains several test cases. Each test case contains a single line,
with three integers A , B and C (each one can be 0 or 1),indicating
respectively the values chosen by Alice, Beto and Clara. The end of input is
determined by EOF.

## Output

For each test case your program must output a single line, containing a single
character. If Alice is the winner the character must be ‘ A ’, if Beto is the
winner the character must be ‘ B ’, if Clara is the winner the character must
be ‘ C ’, and if there is no winner the character must be ‘ * ’ (asterisc).
