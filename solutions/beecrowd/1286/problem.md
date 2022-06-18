https://www.beecrowd.com.br/judge/en/problems/view/1286

# Motoboy

Joseph is a motorcycle that works making deliveries for a pizzeria. His salary
is based on the number of pizzas delivered. How this pizzeria is growing he
asked his friend Roberto to help him in deliveries. Since Roberto is not
working at this time, he agreed to take the worst orders (whose deliveries
will be more time consuming).

So whenever they come to the pizzeria before departing for new deliveries,
Joseph determines the amount of pizzas that Roberto should deliver and select
that will have more time consuming. For example, if there are 22 pizzas to be
delivered and Joseph determine that at most 10 of these pizzas (can be less)
would be delivered by Roberto, these must necessarily be among the requests
that take longer to be delivered. This is illustrated in the first test case,
where Roberto will deliver the second, third and sixth order, summing 8 pizzas
and 62 minutes (23 + 21 + 18). If Roberto was really deliver 10 pizzas, he
would have to deliver the second, third and fourth order and it would take 59
minutes (23 + 21 + 16), which is not the goal of Joseph because in this case
would be delivered more pizzas in a shorter time.

In order to make the division of this work, Joseph asked a friend in academic
computer science to develop a program that would determine how long his friend
Roberto will take to deliver these worst deliveries (in time consuming).

## Input

The input contains many test cases. Each test case contains in the first line
an integer number $N (1 \leq N \leq 20)$ that indicates the number of orders.
The following line contains an integer number $P (1 \leq P \leq 30)$ that
indicates the maximum number of pizzas that can be delivered by Roberto. Each
one of the next $N$ lines contains a order with the total time to be delivered
and the among of pizzas of this order, respectively. The end of input is
represented by $N = 0$, and can't be processed.

## Output

For each test case, the input must be printed as an integer number that
determinates the time spent by Roberto to delivery the pizzas followed by one
space and the text "min.", like the given examples.
