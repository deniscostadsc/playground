https://code.google.com/codejam/contest/32003/dashboard#s=p3

# Shopping Plan

You have a list of items you need to buy today, and you know the locations
(represented as points on a cartesian grid) of a few stores in the area. You
also know which of these stores are selling each item on your list, and at what
price each store sells it. Given the price of gas, what is the minimum amount
you need to spend in order to buy all the items on your shopping list and then
drive back home? You start and end the journey at your house, which is located
at (0,0).

To make matters interesting, some of the items on your list may be perishable.
Whenever you make a purchase that includes one or more perishable items, you
cannot drive to another store without first stopping back at your house. Every
item on your shopping list is guaranteed to be sold by at least one store, so
the trip will always be possible.

## Input

The first line of input gives the number of cases, N. N test cases follow. Each
case starts with a line formatted as

num_items num_stores price_of_gas

The next line contains the num_items items on your shopping list. The items
will be space separated, and each item will consist of only lowercase letters.
If an item is perishable, its name will be followed by a single exclamation
point. There will be no duplicate items on your list. The next num_stores lines
will each be formatted as

x_pos y_pos item1:price1 item2:price2 ...

Each of these lines gives the location of one store, along with the items
available at that store and their corresponding prices. Only items which are on
your shopping list will appear in these lists. Perishable items will not end
with exclamation points on these lists. No item will be repeated in a store's
list. Each store will offer at least one item for sale. No two stores will be
at the same location, and no store will be located at (0,0).

## Output

For each test case, output one line containing "Case #x: " followed by the
minimum possible cost of the trip, rounded to seven decimal places. Don't
forget about price_of_gas, which is the amount of money you must spend per unit
distance that you drive.

## Limits

- $1 \leq N \leq 100$,
- $0 \leq price \space of \space gas \leq 1000$,
- $-1000 \leq x\_pos \leq 1000$,
- $-1000 \leq y\_pos \leq 1000$,
- $1 \leq price \space of \space each \space item \leq 1000$.

## Small dataset

- $1 \leq num_items \leq 5$,
- $1 \leq num_stores \leq 10$.

## Large dataset

- $1 \leq num_items \leq 15$,
- $1 \leq num_stores \leq 50$.
