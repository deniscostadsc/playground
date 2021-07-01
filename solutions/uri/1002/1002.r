input <- file('stdin', 'r')

n <- as.double(readLines(input, n=1))

result = sprintf("A=%.4f", n * n * 3.14159)
write(result, "")

