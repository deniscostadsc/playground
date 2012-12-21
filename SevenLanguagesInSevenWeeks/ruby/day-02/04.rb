a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]

a.each {|i| puts i}

a.each_slice(1) {|x| puts x}