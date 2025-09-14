while line=gets
  n = Integer(line)
  for i in 1..n
    puts "#{i} #{i * i} #{i * i * i}"
  end
end
