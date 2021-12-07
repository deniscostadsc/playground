https://urionlinejudge.com.br/judge/en/problems/view/1148

# Countries at War

In year 2050, after several attempting of ONU to maintain the peace in world,
exploded the third world war. Industrial secrets, commercials and military
forced all countries to utilize extremely sophisticated espionage services, in
order to have one spy of each country in each city in the world. These spies
need to communicate with others spies, informants and even with both centrals
during their actions. Unfortunately, there’s no safe way for a spy to
communicate within a war building, therefore the messages are always sent in
code so that only the receiver is able to read and understand it.

The spies use the only service available in war time, the post offices. Each
city has one post office where letters can be sent. Letters can be sent
directly to its destination or to other post offices, until it arrives to the
post office of the intended city, if possible.
A post office in city A can send a printed letter directly to a post office in
city B if there’s a letter sending agreement, which determines the time,
measured in hours, that a letter takes to travel from city A to city B (and not
necessarily the opposite). If there’s no agreement between the cities, then
post office A can try to send the letter to as many other post offices as
necessary, until it is delivered to its destination, if possible.
Some post offices are electronically interconnected with satellites and optical
fiber. Before war, these connections could reach all offices, making a letter
to be sent instantly, but during hostilities period, each country began to
control the electronic communication, and one office can only send a letter
electronically to other, if both offices are in the same country. Two post
offices, A and B, are in the same country if there’s any way that a printed
letter sent from one office is delivered in the other one.

The espionage service of your country was able to obtain all letter sending
agreements in the world e wishes to find out the minimum time for sending a
letter between various pairs of cities. Would you be able to help it?

## Input

The input contains several test cases. The first line of each case contains two
integers separated by a White space, $N$ ($1 \leq N \leq 500$) and $E$
($0 \leq E \leq N2$), indicating the number of cities (enumerated from 1 to N)
and of letter sending agreements, respectively. Follow, then, E lines, each
one with three integers separated by a White space, $X$, $Y$ and $H$
($1 \leq X, Y \leq N, 1 \leq H \leq 1000$), indicating that there is an
agreement to sending a printed letter from city X to city Y, and that this
letter will be delivered in H hours.

Next, there will be a line with an integer $K$ ($0 \leq K \leq 100$), the
number of queries. Finally, $K$ lines of input, each one representing a query
that contains two integers separated by a white space, $O$ and $D$
($1 \leq O, D \leq N$). You should determine the minimum time for sending a
letter from city $O$ to city $D$. The end of input is determined by
$N = E = 0$.

## Output

For each test case, your program must output $K$ lines. The $N$-th line should
contain an integer $M$, the minimum time in hours, for sending a letter in the
$N$-th query. If there’s no communication way between the cities of the query,
you should print: "Nao e possivel entregar a carta" ('The letter could not be
delivered' in portuguese).

Print a blank line after each case.
