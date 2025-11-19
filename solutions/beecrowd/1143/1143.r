n <- as.integer(readLines("stdin", n = 1))

for (i in 1:n) {
  cat(sprintf("%d %d %d\n", i, i * i, i * i * i))
}
