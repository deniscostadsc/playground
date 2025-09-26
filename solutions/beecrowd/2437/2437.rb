STDIN.read.split("\n").each do |line|
  x_m, y_m, x_r, y_r = line.split.map { |x| x.to_i }
  puts "#{(x_r - x_m).abs + (y_r - y_m).abs}"
end


