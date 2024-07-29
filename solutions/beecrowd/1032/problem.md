https://judge.beecrowd.com/en/problems/view/1032

# Joseph’s Cousin

The Joseph’s problem is notoriously known. For those who are not familiar with
the problem, among people numbered 1,2…n, standing in circle every mth is going
to be executed and only the life of the last remaining person will be saved.
Joseph was smart enough to choose the position of the last remaining person,
thus saving his life to give the message about the incident.

Although many good programmers have been saved since Joseph spread out this
information, Joseph’s cousin introduced a new variant of the malignant game.
This insane character is known for its barbarian ideas and wishes to clean up
the world from silly programmers. We had to infiltrate some agents of the ACM in
order to know the process in this new mortal game.

In order to save yourself from this evil practice, you must develop a tool
capable of predicting which person will be saved.

The Destructive Process

The persons are eliminated in a very peculiar order; m is a dynamical variable,
which each time takes a different value corresponding to the prime numbers’
succession (2,3,5,7…). So in order to kill the ith person, Joseph’s cousin
counts up to the ith prime.

## Input

It consists of separated lines containing n [1..3501], and finishes with a 0.

## Output

The output will consist in separated lines containing the person's position
which the life will be saved.

