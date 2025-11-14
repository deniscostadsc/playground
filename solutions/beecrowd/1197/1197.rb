while line = gets
  v, t = line.split.map(&:to_i)
  puts v * t * 2
end
