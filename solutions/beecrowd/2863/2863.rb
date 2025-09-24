while line=gets
  t = Integer(line)
  fastest_time = Float::INFINITY

  for _ in 1..t
    fastest_time = [fastest_time, Float(gets)].min
  end

  puts fastest_time
end
