input <- readLines(con = "stdin")

for (line in input) {
  if (line == "") next

  numbers <- as.numeric(strsplit(line, " ")[[1]])
  first <- numbers[1]
  last <- numbers[2]

  result <- (last - first + 1) * (first + last) / 2
  cat(sprintf("%.0f\n", result))
}
