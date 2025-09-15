https://judge.beecrowd.com/en/problems/view/2065

# Supermarket Line

Today is the inauguration of a huge supermarket in your town, and everyone are
excited about the low prices promised.

This supermarket has $N$ cashiers, identified by numbers from $1$ to $N$, where
each cashier takes a specific amount of time vi to process an item from a
client. Therefore, if a client has $c_j$ items on his basket, a specific cashier
will take $v_i*c_j$ seconds to process all of the items from this client.

When a client enters the line to be attended he waits until a cashier is free.
If more than one cashier are free at the same time, he will be attended by the
cashier with the lowest identification number. This cashier will only be free
again when he finishes processing all of the clients items.

There are $M$ clients on the line to be attended, each with a specific number of
items on his basket. Given the information about the cashiers and the clients,
the manager asked your help to find out how long it will take so all the clients
are attended.

## Input

The first line of input has two integers $N$ and $M$, indicating the number of
cashiers and clients, respectively $(1 \leq N \leq M \leq 10^4)$.

Following there will be $N$ integers $v_i$, indicating how long the $i$-th
cashier takes to process an item $(1 \leq v_i \leq 100$, for every $1 \leq i
\leq N)$.

Following there will be $M$ integers $c_j$, indicating how many items the $j$-th
client has $(1 \leq c_j \leq 100$, for every $1 \leq j \leq M)$.

## Output

Print a line containing an integer, indicating how long it will take so all the
clients are attended.
