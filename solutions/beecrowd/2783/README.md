https://judge.beecrowd.com/en/problems/view/2783

# Cup Stickers

In Soccer World Cup year, the official album of cards is always a great success
among children and also among adults. For those who do not know, the album
contains spaces numbered from 1 to N to paste the cards; each sticker, also
numbered from 1 to N, is a small photo of a player from one of the selections
that will play the World Cup. The goal is to paste all the cards in the
respective spaces in the album, in order to complete the album (that is, leave
no space without the corresponding sticker).

Some stickers are stamped and are rarer, harder to get. The stickers are sold in
closed envelopes, so the buyer is not buying the stickers he is buying, and may
happen to buy a sticker that has already pasted on the album.

To help users, the company that sells the album and stickers wants to create an
application that allows them to easily manage the missing pieces to complete the
album and is asking for their help.

Given the total number of spaces and stickers in the album (N), the list of
stamped cards and a list of already purchased cards (which may contain repeated
stickers), your task is to determine how many stamped stickers are missing to
complete the album.

## Input

The first line contains three integers $N (1 \leq N \leq 100)$, $C (1 \leq C
\leq N / 2)$ and $M (1 \leq M \leq 300)$ respectively indicating the number of
cards (and spaces) of the album, the number of stamps stamped on the album and
the number of cards already purchased. The second line contains $C$ distinct
integers $X_i$ indicating the stamps stamped on the album. The third line
contains $M$ integers $Y_i (1 \leq X_i, Y_i \leq N)$ indicating the cards
already purchased.

## Output

Your program should to produce an integer representing the number of the
sitckers stamped that are missing to complete the album
