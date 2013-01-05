#!/usr/bin/env io

//
// Add a slot called myAverage to a list that computes the average of
// all the numbers in a list. What happens if there are no numbers
// in a list? (Bonus: Raise an Io exception if any item in the list is
// not a number.)
//

List myAverage := method(
    sum := 0
    numbersCount := 0

    self foreach(i, item,
        if (item type == "Number",
            sum = sum + item
            numbersCount = numbersCount + 1
        )
    )

    if (numbersCount != 0,
        sum / numbersCount,
        Exception raise ("Hey, we need at least one number.")
    )
)

list(1, 2, 3, "NaN") myAverage println
list(1, 2, 3, 4, "NaN") myAverage println
