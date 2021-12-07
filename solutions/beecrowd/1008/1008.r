input <- file('stdin', 'r')

a <- as.integer(readLines(input, n=1))
b <- as.integer(readLines(input, n=1))
c <- as.double(readLines(input, n=1))

write(sprintf("NUMBER = %d", a), "")
write(sprintf("SALARY = U$ %.2f", b * c), "")
