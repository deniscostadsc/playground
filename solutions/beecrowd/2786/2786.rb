while line=gets
  width = Integer(line)
  length = Integer(gets)

  puts "#{(width * length) + ((width - 1) * (length - 1))}"
  puts "#{((width - 1) * 2) + ((length - 1) * 2)}"
end
