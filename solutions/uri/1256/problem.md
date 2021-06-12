https://www.urionlinejudge.com.br/judge/en/problems/view/1256

# Hash Tables

Hash tables are used to store elements based on the absolute value of their
keys and collision handling techniques. To calculate an address where should
be stored a determinated key, it uses a function called hash function which
transforms the key in one of the available addresses in the table.

Let's assume that an application uses a hash table with 13 base addresses
(indexes 0 through 12) and uses the dispersion `function h(x) = x mod 13`,
where x is the key whose base address would be calculated.

If x = 49, the hash function will return 10, indicating the location (address)
where this key should be stored. If we needed insert the key 88 in the same
application, the calculation returns the same value 10, a collision will
occurs. Treatment of collisions is used to solve conflicts in cases where more
than one key is mapped to the same address. This treatment may consider key
address recalculation or exterior chaining.

So the teacher asked you to write a program that calculates the address for
many keys in some tables, with functions of spreading and treatment of
collision by exterior chaining.

## Input

The input contains many test cases. The firs line of input contains an integer
N indicating the number of test cases. Each test case is composed by two
lines. The first one contains a integer $M$ ($1 \leq M \leq 100$) that
indicates the number of base addresses in the table (usually a prime number)
followed by an space and a integer $C$ ($1 \leq C \leq 200$) that indicates
the among of keys to be stored. The second one contains each one of the C keys
(with value between 1 and 200), separated by an white space.

## Output

The output must be printed like the following examples, where the quantity of
lines of each test case is determinated by the value of M. A blank line should
separate each set of output.
