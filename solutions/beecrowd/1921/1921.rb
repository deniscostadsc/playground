while line=gets
  line = line.strip
  next if line.empty?

  n = Integer(line)

  puts (n * (n - 1) / 2) - n
end
