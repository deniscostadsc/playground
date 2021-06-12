input <- file('stdin', 'r')

n <- as.integer(readLines(input, n=1))

write(
    paste(
        "A=",
        format(
            n * n * 3.14159,
            nsmall=4
        ),
        sep=""
    ),
    ''
)
