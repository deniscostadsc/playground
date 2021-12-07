http://www.beecrowd.com.br/judge/en/problems/view/1318

# Fake Tickets

Your school organized a big party to celebrate your team brilliant win in the
prestigious, world-famous ICPC (International Collegiate Poetry Contest).
Everyone in your school was invited for an evening which included cocktail,
dinner and a session where your team work was read to the audience. The
evening was a success – many more people than you expected shoed interested in
your poetry – although some critics of yours said it was food rather than
words that attracket such an audience.

Whatever the reason, the next day you found out why the school hall had seemed
so full: the school director confided he had discovered that several of the
tickets used by the guests were fake. The real tickets were numbered
sequentially from 1 to N (N \leq 10000). The director suspects some people had
used the school scanner and printer from the Computer Room to produce copies of
the real tickets. The director gave you a pack with all tickets collected from
the guests at the party’s entrance, and asked you to determine how many tickets
in the pack had “clones”, that is, another ticket with the same sequence number.

## Input

The input contains data for several test cases. Each test case has two lines.
The first line contains two integers $N$ and $M$ which indicate respectively
the number of original tickets and the number of persons attending the party
($1 \leq N \leq 10000$ and $1 \leq M \leq 20000$). The second line of a test
case contains $M$ integers $T_i$, representing the ticket numbers in the pack
the director gave you ($1 \leq T_i \leq N$). the end of input is indicated by
($N = M = 0$).

## Output

For each test case your program should print one line, containing the number of
tickets in the pack that had another ticket with the same sequence number.
