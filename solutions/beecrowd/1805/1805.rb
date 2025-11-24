STDIN.read.split("\n").each do |line|
  first, last = line.split.map { |x| x.to_i }
  puts (last - first + 1) * (first + last) / 2
end
