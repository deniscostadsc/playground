input <- file('stdin', 'r')

a <- as.double(readLines(input, n=1))
b <- as.double(readLines(input, n=1))
c <- as.double(readLines(input, n=1))

result = sprintf("MEDIA = %.1f", (a * 2.0 + b * 3.0 + c * 5.0) / 10.0)
write(result, "")
