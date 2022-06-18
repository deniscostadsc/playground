https://www.beecrowd.com.br/judge/en/problems/view/1288

# Destruction Cannon

The "Destruction Cannon" game is very simple to be understood. You have been
assigned a mission to destroy a castle, knowing that it has an integer number
R, which represents the value of its max resistance. To accomplish your
mission, you've received a cannon that is loaded with lead, and it has a
maximum loading capacity K expressed in kilos. It is possible to exist pieces
of lead with the same weight but with different destructive power and this is
not so important. To each projectil that hit the castle, its destruction power
amount must be subtracted from the castle total resistance.

Considering that the cannon can be loaded only once, respecting your limits of
kilos, your task is to load the cannon with projectiles that do not exceed its
load limit but do the most damage possible to know if the mission has been
completed or not.

## Input

The first line of input contains the number of test cases. Each test case
begin with a line containing a integer $N (1 \leq N \leq 50)$, that
represents the number of lead pieces available. Follow $N$ lines containing two
integer $X$ and $Y$ each, representing respectively the amount of destruction
power and projectil (bullet) weight. The next line contains an integer $K
(1 \leq K \leq 100)$ that represents the load capacity of the cannon and the
last line of each test case contains an integer $R$ that indicates the castle
total resistance.

## Output

The output is based on whether the total damage of the loads fired is equal or
bigger than the castle's total resistance. If true, the program should print
"Missao completada com sucesso", else the output must be "Falha na missao".
