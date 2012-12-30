#!/usr/bin/env ruby

File.open('02.rb', 'r') do |f|
    while line = f.gets
        puts line
    end
end
