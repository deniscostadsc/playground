#!/usr/bin/env ruby

#
# Find out how to access files with and without code blocks. What
# is the benefit of the code block?
#

File.open('02.rb', 'r') do |f|
    while line = f.gets
        puts line
    end
end

#
# Code blocks let you write a smaller, readable and beautiful code.
#
# For example: File.open('02.rb', 'r').each {|line| puts line}
#
