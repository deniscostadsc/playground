#!/usr/bin/env ruby

pattern = ARGV[0]
file = ARGV[1]

File.open(file, 'r').each {|line| puts line if line.match pattern}
