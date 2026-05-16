https://judge.beecrowd.com/en/problems/view/2712

# Vehicular Restriction

The vehicle restriction of São Paulo city is a restriction on the circulation of
motor vehicles in the city. Implemented since 1996 with the aim of improving
environmental conditions by reducing the burden of pollutants in the atmosphere,
it has consolidated itself as an instrument to reduce congestion in the main
highways of the city, during peak times. In the boundary ways, traffic of trucks
and automobiles that are within the restriction is not allowed. There is a scale
that determines on which days of the week which vehicles can not travel. This
scale is governed by the last digit of the vehicle nameplate, being:

- Monday, final digit of board 1 and 2
- Tuesday, final digit of plate 3 and 4
- Wednesday, digit end of plate 5 and 6
- Thursday, final digit of plate 7 and 8
- Friday, final digit of plate 9 and 0

The drivers who are caught violating the traffic restriction are charged with a
fine and four points in the driver's license.

## Input

The first entry line represents the number of $N$ tests $(1 \leq N < 1000)$ that
should be considered. The other entries are string with maximum size $S (1 \leq
S \leq 100)$ representing each card to be analyzed, so that each card is on a
single entry line. The expected format for a valid car plate in São Paulo is
"**AAA-9999**", such that A is a valid character in [A-Z], and 9 is a valid
numeric digit in [0-9].

## Output

The set of valid values ​​as output are: MONDAY, TUESDAY, WEDNESDAY, THURSDAY
and FRIDAY, according to the predefined constraint table, and FAILURE if the
board does not present the defined pattern.


