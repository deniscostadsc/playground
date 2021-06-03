name = gets
salary = gets.to_f
value_sold = gets.to_f

puts "TOTAL = R$ #{'%.2f' % (salary + value_sold * 0.15)}"
