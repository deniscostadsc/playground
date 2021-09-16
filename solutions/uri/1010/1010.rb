s = 0.0

STDIN.read.split("\n").each do |a|
  a, b, c = a.split.map { |x| x.to_f }
  s += c * b
end

puts "VALOR A PAGAR: R$ #{'%.2f' % s}"
