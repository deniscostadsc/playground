input <- readLines(con = "stdin")

for (line in input) {
  if (line == "") next

  numbers <- as.numeric(strsplit(line, " ")[[1]])
  n <- numbers[1]

  write(n)
}
