#!/usr/bin/env ruby

#
# Write a simple grep that will print the lines of a file having any
# occurrences of a phrase anywhere in that line. You will need to do
# a simple regular expression match and read lines from a file. (This
# is surprisingly simple in Ruby.) If you want, include line numbers.
#

pattern = ARGV[0]
file = ARGV[1]
count = 0

File.open(file, 'r').each {|line| puts line if line.match pattern}
